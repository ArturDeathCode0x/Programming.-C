```c
#include <stdio.h>

void calcular_cedulas(int valor) {

    int notas_50, notas_20, notas_10, notas_5, notas_2;
    int sobra;

    // Calcula as notas de R$ 50
    notas_50 = valor / 50;
    sobra = valor % 50;

    // Calcula as notas de R$ 20
    notas_20 = sobra / 20;
    sobra = sobra % 20;

    // Calcula as notas de R$ 10
    notas_10 = sobra / 10;
    sobra = sobra % 10;

    // Calcula as notas de R$ 5
    notas_5 = sobra / 5;
    sobra = sobra % 5;

    // Calcula as notas de R$ 2
    notas_2 = sobra / 2;
    sobra = sobra % 2;

    // Exibe o resultado
    printf("\n========== SAQUE ==========\n");
    printf("Notas de R$ 50: %d\n", notas_50);
    printf("Notas de R$ 20: %d\n", notas_20);
    printf("Notas de R$ 10: %d\n", notas_10);
    printf("Notas de R$ 5 : %d\n", notas_5);
    printf("Notas de R$ 2 : %d\n", notas_2);

    // Verifica se sobrou algum valor
    if (sobra > 0) {
        printf("Valor não sacado: R$ %d\n", sobra);
    }
}

int main() {

    int valor_saque;

    // Solicita o valor do saque
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor_saque);

    // Chama a função para calcular as cédulas
    calcular_cedulas(valor_saque);

    return 0;
}

