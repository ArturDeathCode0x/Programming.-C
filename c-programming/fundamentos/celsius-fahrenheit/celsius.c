#include <stdio.h> // Biblioteca

int main() { // Início do programa

    float celsius; // Temperatura em Celsius
    float fahrenheit; // Temperatura em Fahrenheit

    printf("Digite celsius: "); // Pede a temperatura
    scanf("%f", &celsius); // Recebe a temperatura

    fahrenheit = (celsius * 9 / 5) + 32; // Converte para Fahrenheit

    printf("Resultado eh %.2f", fahrenheit); // Mostra o resultado

    return 0; // Finaliza o programa
}
