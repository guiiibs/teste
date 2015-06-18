#include "lib.h"

int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE];
    int socket = ConexaoRawSocket("eth0");
    int retorno;

    scanf("%s",buffer);
   send(socket, buffer, sizeof(buffer),0);

    while(recv(socket,buffer,BUFFER_SIZE, 0) ){
        printf("%s\n", buffer);
        scanf("%s",buffer);
        send(socket, buffer, BUFFER_SIZE,0);
        printf("retorno = %d\n", retorno);
     }





    return 0;
}