all: ConexaoRawSocket.o server.o main clean

main: 
	gcc -o server server.o ConexaoRawSocket.o

server.o: server.c
	gcc -o server.o -c server.c

ConexaoRawSocket.o: ConexaoRawSocket.c
	gcc -o ConexaoRawSocket.o -c ConexaoRawSocket.c

clean:
	rm -rf *~ *.o