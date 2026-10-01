#include <stdio.h> // Biblioteca

int main() { // Início do programa

    int idade; // Guarda a idade

    printf("Digite sua idade:"); // Pede a idade
    scanf("%d", &idade); // Recebe a idade

    // Verifica se a idade é maior ou igual a 18
    if (idade >= 18) {

        printf("Voce eh maior de idade");

    } else {

        // Caso tenha menos de 18 anos
        printf("Voce eh menor de idade");
    }

    return 0; // Finaliza o programa
}
