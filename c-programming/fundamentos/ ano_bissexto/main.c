#include <stdio.h>

int main() {

    // Declaração da variável que armazenará o ano
    int ano;

    // Solicita o ano ao usuário
    printf("Digite o ano: ");

    // Recebe o ano digitado
    scanf("%d", &ano);

    // Um ano é bissexto quando é divisível por 400
    if (ano % 400 == 0) {

        printf("Ano bissexto\n");
    }

    // Anos divisíveis por 100 não são bissextos,
    // exceto quando também são divisíveis por 400
    else if (ano % 100 == 0) {

        printf("Nao e bissexto\n");
    }

    // Anos divisíveis por 4 são bissextos
    else if (ano % 4 == 0) {

        printf("Esse ano e bissexto\n");
    }

    // Se não atender a nenhuma das condições anteriores,
    // o ano não é bissexto
    else {

        printf("Nao e bissexto\n");
    }

    // Finaliza o programa
    return 0;
}
