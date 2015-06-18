#include "lib.h"

int main()
{
	ssize_t receive;
	char buffer[BUFFER_SIZE];
	int socket = ConexaoRawSocket("eth0");
	while (recv(socket, buffer, BUFFER_SIZE, 0))
	{
		printf("recebido: %s\n", buffer);
		scanf("%s", buffer);
		send(socket, buffer, BUFFER_SIZE, 0);
	}
}