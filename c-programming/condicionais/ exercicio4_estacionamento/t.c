#include <stdio.h>

int main() {

    char tipo;
    int horas;
    int periodo;

    float tarifa;
    float valorBruto;
    float desconto = 0;
    float taxaExtra = 0;
    float valorFinal;


    printf("Digite o tipo de veiculo:\n");
    printf("M - Motocicleta\n");
    printf("C - Carro\n");
    printf("V - Van\n");
    printf("Opcao: ");
    scanf(" %c", &tipo);


    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);


    printf("\nEscolha o periodo de entrada:\n");
    printf("1 - Manha\n");
    printf("2 - Tarde (PICO)\n");
    printf("3 - Noite\n");
    printf("Opcao: ");
    scanf("%d", &periodo);


    // Define a tarifa de acordo com o veiculo
    switch (tipo) {

        case 'M':
        case 'm':
            tarifa = 5.00;
            break;

        case 'C':
        case 'c':
            tarifa = 10.00;
            break;

        case 'V':
        case 'v':
            tarifa = 15.00;
            break;

        default:
            printf("Tipo de veiculo invalido.\n");
            return 1;
    }


    // Valor bruto das horas
    valorBruto = tarifa * horas;


    // Desconto de 10% para mais de 5 horas
    if (horas > 5) {

        desconto = valorBruto * 0.10;

        valorBruto = valorBruto - desconto;
    }


    // Taxa extra de R$ 8 para carro ou van no periodo da tarde
    if ((tipo == 'C' || tipo == 'c' ||
         tipo == 'V' || tipo == 'v') && periodo == 2) {

        taxaExtra = 8.00;
    }


    // Soma a taxa extra
    valorFinal = valorBruto + taxaExtra;


    // Desconto de 20% para moto no periodo da noite
    if ((tipo == 'M' || tipo == 'm') && periodo == 3) {

        valorFinal = valorFinal * 0.80;
    }


    // Exibindo o resultado
    printf("\n===== DETALHAMENTO =====\n");

    printf("Tarifa por hora: R$ %.2f\n", tarifa);
    printf("Quantidade de horas: %d\n", horas);
    printf("Desconto de 10%%: R$ %.2f\n", desconto);
    printf("Taxa extra: R$ %.2f\n", taxaExtra);
    printf("Valor final: R$ %.2f\n", valorFinal);


    return 0;
}
