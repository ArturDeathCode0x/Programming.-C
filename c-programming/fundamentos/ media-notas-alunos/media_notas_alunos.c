#include <stdio.h> // Biblioteca

int main() { // Início do programa

    float nota1; // Primeira nota
    float nota2; // Segunda nota

    printf("Digite a primeira nota: "); // Pede a primeira nota
    scanf("%f", &nota1); // Recebe a primeira nota

    printf("Digite a segunda nota: "); // Pede a segunda nota
    scanf("%f", &nota2); // Recebe a segunda nota

    float media = (nota1 + nota2) / 2; // Calcula a média

    printf("Resultado da media eh %.2f", media); // Mostra a média

    return 0; // Finaliza o programa
}

