CC = gcc

target: output

output: client.o server.o libb.o
	gcc client.o server.o libb.o -o output 

client.o: client.c 
	gcc -c client.c 

server.o: server.c 
	gcc -c server.c

libb.o: libb.c
	gcc -c libb.c 

clean:
	rm *.o output
	clear