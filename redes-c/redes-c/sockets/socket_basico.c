
#include <stdio.h>          // Biblioteca para printf()
#include <sys/socket.h>     // Biblioteca que permite criar sockets
#include <unistd.h>        // Biblioteca que possui a função close()

int main(void) {

    int sock;               // Variável que vai guardar o identificador do socket

    // Cria um socket
    // AF_INET     = utiliza IPv4
    // SOCK_STREAM = utiliza TCP
    // 0           = protocolo padrão para TCP
    sock = socket(AF_INET, SOCK_STREAM, 0);

    // Verifica se o socket não foi criado
    // -1 significa que ocorreu um erro
    if (sock == -1) {
        printf("Erro ao criar o socket.\n");
        return 1;           // Encerra o programa indicando erro
    }

    // Se chegou aqui, o socket foi criado corretamente
    printf("Socket criado com sucesso!\n");

    // Fecha o socket depois de utilizá-lo
    close(sock);

    return 0;               // Encerra o programa normalmente
}
