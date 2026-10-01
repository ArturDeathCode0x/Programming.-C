/*
    Exercício 2:

    Solicitar ao usuário um número máximo ímpar
    e apresentar uma sequência no formato:

    1 2 3 4 5 6 7 8 9
     2 3 4 5 6 7 8
      3 4 5 6 7
       4 5 6
        5
*/

#include <stdio.h>
#include <stdbool.h>


// Verifica se um número é par
bool eh_par(int numero) {

    // Se o resto da divisão por 2 for 0, o número é par
    return numero % 2 == 0;
}


int main() {

    // Armazena o número máximo informado pelo usuário
    int numero_maximo;


    // Solicita o número máximo
    printf("Digite um numero impar: ");
    scanf("%d", &numero_maximo);


    // Verifica se o número informado é par
    if (eh_par(numero_maximo)) {

        printf("Erro: o numero deve ser impar.\n");

        return 0;
    }


    /*
        Controla a quantidade de linhas.

        Como o número máximo é ímpar, dividimos por 2
        e adicionamos 1 para encontrar a quantidade de linhas.
    */
    for (
        int linha = 1;
        linha <= (numero_maximo + 1) / 2;
        linha++
    ) {


        // Percorre todos os números até o número máximo
        for (
            int numero = 1;
            numero <= numero_maximo;
            numero++
        ) {


            /*
                Na primeira linha, imprime todos os números
                normalmente.
            */
            if (linha == 1) {

                printf("%d ", numero);
            }


            /*
                Nas próximas linhas, elimina os números
                que ficam nas laterais.
            */
            else if (
                numero < linha ||
                numero > numero_maximo - linha + 1
            ) {

                printf("  ");
            }


            // Imprime os números que permanecem no centro
            else {

                printf("%d ", numero);
            }
        }


        // Pula para a próxima linha
        printf("\n");
    }


    // Finaliza o programa
    return 0;
}
