
// Exercício:
// Ler notas até o usuário digitar um valor negativo.

#include <stdio.h>

int main() {

    // Variável que armazena a nota digitada
    float nota = 0;

    // Variável que acumula a soma das notas
    float soma = 0;


    // Continua o loop enquanto a nota for maior ou igual a zero
    while (nota >= 0) {

        // Solicita uma nota ao usuário
        printf("Digite uma nota: ");

        // Recebe a nota digitada
        scanf("%f", &nota);


        // Verifica se a nota é válida para ser somada
        if (nota >= 0) {

            // Adiciona a nota à soma
            soma += nota;

            // Mostra a nota digitada
            printf("Nota: %.2f\n", nota);

            // Mostra a soma acumulada
            printf("Soma total: %.2f\n", soma);
        }
    }


    // Informa que o loop foi encerrado
    printf("Valor negativo informado. Loop encerrado.\n");

    // Mostra a soma final
    printf("Soma final: %.2f\n", soma);


    // Finaliza o programa
    return 0;
}

