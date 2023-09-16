#include <stdio.h>
#include "lib.h"
#include <pthread.h>

void *msg_read(void *client_socket)
{
  char recv_msg[1024];
  int client = *(int *)client_socket;
  while (1)
  {
    int length = recv(client, recv_msg, 1024, 0);
    if (length > 0)
    {
      recv_msg[length] = 0;
      printf("%s\n", recv_msg);
    }
  }
}
void msg_read_thread(int *client_socket)
{
  pthread_t id;
  pthread_create(&id, NULL, msg_read, client_socket);
}

void msg_write_thread(int client_socket)
{
  char usrname[10];
  printf("Your name: ");
  scanf("%[^\n]%*c", usrname);

  printf("Hello %s\n\n", usrname);
  while (1)
  {
    char *content = NULL;
    size_t line;

    int length = getline(&content, &line, stdin);
    char buffer[1024];
    if (length > 0)
    {
      content[length - 1] = 0;
      sprintf(buffer, "%s: %s", usrname, content);
      if (strcmp(content, "exit") == 0)
      {
        break;
      }
      else
        send(client_socket, buffer, strlen(buffer), 0);
    }
  }
}
int main()
{
  int client_socket = create_tcp_ipv4_socket();
  struct sockaddr_in *addr = create_tcp_ipv4_address("127.0.0.1", 8080);
  int crslt = connect(client_socket, (struct sockaddr *)addr, sizeof(*addr));

  if (!crslt)
  {
    printf("Connected to server successfully!\n");
  }
  msg_read_thread(&client_socket);
  msg_write_thread(client_socket);
}