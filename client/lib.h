#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/ethernet.h>
#include <linux/if_packet.h>
#include <linux/if.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define marc (011111110 << 0)

#define BUFFER_SIZE 5

/* Estrutura da mensagem */
typedef struct  message{
    unsigned char marca, tamanho, tipo;
    unsigned char dados[63];
    unsigned char crc;
} message;


/* Prototipos das funcoes*/
int ConexaoRawSocket(char *device);

