all: ConexaoRawSocket.o client.o main clean

main:
	gcc -o client client.o ConexaoRawSocket.o

client.o: client.c
	gcc -o client.o -c client.c

ConexaoRawSocket.o: ConexaoRawSocket.c
	gcc -o ConexaoRawSocket.o -c ConexaoRawSocket.c

clean:
	rm -rf *~ *.o