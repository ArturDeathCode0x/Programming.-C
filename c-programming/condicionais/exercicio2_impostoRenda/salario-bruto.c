#include <stdio.h>

int main() {
    float salario;
    float imposto;
    float aliquota;
    float efetiva;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);

    if (salario <= 2259.20) {
        aliquota = 0.0;
        imposto = 0.0;
    }
    else if (salario <= 2826.65) {
        aliquota = 0.075;
        imposto = (salario * aliquota) - 169.44;
    }
    else if (salario <= 3751.05) {
        aliquota = 0.15;
        imposto = (salario * aliquota) - 381.44;
    }
    else if (salario <= 4664.68) {
        aliquota = 0.225;
        imposto = (salario * aliquota) - 662.77;
    }
    else {
        aliquota = 0.275;
        imposto = (salario * aliquota) - 896.00;
    }

    if (imposto < 0) {
        imposto = 0;
    }

    efetiva = (imposto / salario) * 100;

    printf("\nSalario Bruto: R$ %.2f\n", salario);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Aliquota Efetiva: %.2f%%\n", efetiva);

    return 0;
}
