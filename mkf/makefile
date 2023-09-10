CC=gcc

target: output

output: main.o convert.o 
	$(CC) main.o convert.o -o output

main.o: main.c 
	$(CC) -c main.c 

convert.o: convert.c
	$(CC) -c convert.c 

clean:
	rm *.o output
	clear