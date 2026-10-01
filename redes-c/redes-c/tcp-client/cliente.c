#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main(void) {

    int sock;
    struct sockaddr_in servidor;

    // Cria o socket TCP usando IPv4
    sock = socket(AF_INET, SOCK_STREAM, 0);

    // Verifica se o socket foi criado
    if (sock == -1) {
        printf("Erro ao criar o socket.\n");
        return 1;
    }

    printf("Socket criado com sucesso!\n");

    // Define o tipo de endereço
    servidor.sin_family = AF_INET;

    // Define a porta do servidor
    servidor.sin_port = htons(PORT);

    // Define o endereço do servidor
    // 127.0.0.1 = próprio computador
    servidor.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Tenta conectar ao servidor
    if (connect(sock, (struct sockaddr *)&servidor,
                sizeof(servidor)) == -1) {

        printf("Erro ao conectar ao servidor.\n");
        close(sock);
        return 1;
    }

    printf("Conectado ao servidor!\n");

    // Fecha o socket
    close(sock);

    return 0;
}
