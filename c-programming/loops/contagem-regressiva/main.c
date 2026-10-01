
#include <stdio.h>

// Contagem regressiva:
// O usuário informa um número e o programa
// decrementa esse número até chegar em 1.

int main() {

    // Declara a variável que armazenará o número inicial
    int numero;

    // Solicita um número ao usuário
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Exibe o título da contagem
    printf("\nContagem Regressiva:\n");

    // Continua enquanto o número for maior ou igual a 1
    while (numero >= 1) {

        // Exibe o número atual
        printf("%d\n", numero);

        // Decrementa o número em 1
        // É a mesma coisa que: numero = numero - 1
        // Também poderia ser: numero -= 1
        numero--;
    }

    // Mensagem exibida quando a contagem termina
    printf("Boom!\n");

    // Finaliza o programa
    return 0;
}


