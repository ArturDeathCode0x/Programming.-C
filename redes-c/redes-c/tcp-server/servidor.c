#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main(void) {

    int servidor;
    int cliente;

    struct sockaddr_in endereco;

    // Cria o socket TCP usando IPv4
    servidor = socket(AF_INET, SOCK_STREAM, 0);

    // Verifica se o socket foi criado
    if (servidor == -1) {
        printf("Erro ao criar o socket.\n");
        return 1;
    }

    printf("Socket do servidor criado!\n");

    // Define IPv4
    endereco.sin_family = AF_INET;

    // Permite conexões em qualquer endereço da máquina
    endereco.sin_addr.s_addr = INADDR_ANY;

    // Define a porta
    endereco.sin_port = htons(PORT);

    // Liga o socket ao endereço e à porta
    if (bind(servidor, (struct sockaddr *)&endereco,
             sizeof(endereco)) == -1) {

        printf("Erro no bind.\n");
        close(servidor);
        return 1;
    }

    printf("Servidor configurado na porta %d.\n", PORT);

    // Coloca o servidor para aguardar conexões
    if (listen(servidor, 1) == -1) {

        printf("Erro no listen.\n");
        close(servidor);
        return 1;
    }

    printf("Aguardando conexão...\n");

    // Aceita uma conexão
    cliente = accept(servidor, NULL, NULL);

    if (cliente == -1) {
        printf("Erro no accept.\n");
        close(servidor);
        return 1;
    }

    printf("Cliente conectado!\n");

    // Fecha as conexões
    close(cliente);
    close(servidor);

    return 0;
}
