/*
    Exercício:
    Ler 3 notas de um aluno e a média dos exercícios (ME).

    Calcular a média de aproveitamento (MA) usando:

    MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7

    Conceitos:
    MA >= 9              -> A
    MA >= 7.5 e < 9      -> B
    MA >= 6 e < 7.5      -> C
    MA >= 4 e < 6        -> D
    MA < 4               -> E
*/

#include <stdio.h>

int main() {

    // Declara as três notas do aluno
    float nota1;
    float nota2;
    float nota3;

    // Declara a média dos exercícios
    float media_exercicios;

    // Declara a média de aproveitamento
    float media_aproveitamento;


    // Solicita a primeira nota
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    // Solicita a segunda nota
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    // Solicita a terceira nota
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    // Solicita a média dos exercícios
    printf("Digite a media dos exercicios: ");
    scanf("%f", &media_exercicios);


    // Verifica se alguma nota é maior que 10
    if (nota1 > 10 || nota2 > 10 || nota3 > 10 ||
        media_exercicios > 10) {

        printf("Erro: as notas nao podem ser maiores que 10.\n");

        return 0;
    }


    // Calcula a média de aproveitamento
    // Nota 1 possui peso 1
    // Nota 2 possui peso 2
    // Nota 3 possui peso 3
    // A média dos exercícios possui peso 1
    media_aproveitamento =
        (nota1 + nota2 * 2 + nota3 * 3 + media_exercicios) / 7;


    // Mostra a média de aproveitamento
    printf("\nMedia de aproveitamento: %.1f\n",
           media_aproveitamento);


    // Verifica o conceito do aluno
    if (media_aproveitamento >= 9) {

        printf("Conceito: A\n");
    }

    else if (media_aproveitamento >= 7.5) {

        printf("Conceito: B\n");
    }

    else if (media_aproveitamento >= 6) {

        printf("Conceito: C\n");
    }

    else if (media_aproveitamento >= 4) {

        printf("Conceito: D\n");
    }

    else {

        printf("Conceito: E\n");
    }


    // Finaliza o programa
    return 0;
}
