
#include <stdio.h>

int main() {

    // Declara variaveis
    int lado1;
    int lado2;
    int lado3; // Tres lados do triangulo

    printf("Digite primeiro lado do triangulo: ");
    scanf("%d", &lado1);

    printf("Digite segundo lado do triangulo: ");
    scanf("%d", &lado2);

    printf("Digite terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    // Verifica se os tres lados sao iguais
    if ((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)) {

        printf("Entao seu triangulo e equilatero\n");

    }

    // Verifica se os lados podem formar um triangulo
    else if ((lado1 + lado2 < lado3) ||
             (lado2 + lado3 < lado1) ||
             (lado1 + lado3 < lado2)) {

        printf("Erro: esses lados nao formam um triangulo\n");

    }

    // Verifica se dois lados sao iguais
    else if ((lado1 == lado2 && lado1 != lado3) ||
             (lado1 == lado3 && lado1 != lado2) ||
             (lado2 == lado3 && lado2 != lado1)) {

        printf("O seu triangulo e isosceles\n");

    }

    // Se nenhum lado for igual, e escaleno
    else {

        printf("O seu triangulo e escaleno\n");
    }

    return 0;
}
