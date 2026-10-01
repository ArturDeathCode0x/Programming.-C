#include <stdio.h>

int main() {

    // Declara a variável que receberá o número
    int numero;

    // Assume inicialmente que o número é primo
    // 1 = primo
    // 0 = não é primo
    int primo = 1;


    // Solicita um número ao usuário
    printf("Digite um numero: ");
    scanf("%d", &numero);


    // Números menores ou iguais a 1 não são primos
    if (numero <= 1) {

        printf("O numero %d nao e primo.\n", numero);

        return 0;
    }


    // Verifica se o número possui algum divisor
    for (int i = 2; i < numero; i++) {

        // Se o resto da divisão for 0,
        // encontramos um divisor
        if (numero % i == 0) {

            // O número não é primo
            primo = 0;

            // Para a repetição porque já encontramos um divisor
            break;
        }
    }


    // Verifica se o número é primo
    if (primo == 1) {

        printf("O numero %d e primo.\n", numero);
    }

    else {

        printf("O numero %d nao e primo.\n", numero);
    }


    // Finaliza o programa
    return 0;
}
