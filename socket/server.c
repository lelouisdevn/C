#include <stdio.h>
#include "lib.h"
#include <pthread.h>
int client_sockets[10];
int accepted_clients = 0;
void accept_clients(int *);
void recv_fwd(int *);
void *listen_for_messages(void *);

void accept_clients(int *server_socket)
{
	while (1)
	{
		struct sockaddr_in client_addr;
		int client_addr_len = sizeof(client_addr);
		int client = accept(*server_socket, (struct sockaddr *)&client_addr, &client_addr_len);

		client_sockets[accepted_clients++] = client;

		recv_fwd(&client);
	}
}

void recv_fwd(int *client_socket)
{
	pthread_t t_id;
	pthread_create(&t_id, NULL, listen_for_messages, client_socket);
}
void broadcast(int socket, char *message)
{
	for (int i = 0; i < accepted_clients; i++)
	{
		if (client_sockets[i] != socket)
		{
			send(client_sockets[i], message, strlen(message), 0);
		}
	}
}
void *listen_for_messages(void *client_socket)
{
	char buffer[1024];
	int client = *(int *)client_socket;
	while (1)
	{
		int msg_len = recv(client, buffer, 1024, 0);
		if (msg_len > 0)
		{
			buffer[msg_len] = 0;
			printf("- %s\n", buffer);
			broadcast(client, buffer);
		}
	}
}
int main()
{
	int server_socket = create_tcp_ipv4_socket();
	struct sockaddr_in *server_addr = create_tcp_ipv4_address("", 8080);
	int brslt = bind(server_socket, (struct sockaddr *)server_addr, sizeof(*server_addr));

	if (brslt == 0)
	{
		printf("Bound successfully!\n");
	}

	listen(server_socket, 3);

	accept_clients(&server_socket);
}