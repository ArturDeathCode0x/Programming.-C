#include <stdio.h>

int main() {
    float renda, imovel, parcela;
    int parcelas, score;

    printf("Digite a renda mensal bruta: ");
    scanf("%f", &renda);

    printf("Digite o valor do imovel: ");
    scanf("%f", &imovel);

    printf("Digite o numero de parcelas: ");
    scanf("%d", &parcelas);

    printf("Digite o score de credito: ");
    scanf("%d", &score);

    parcela = imovel / parcelas;

    printf("\nValor da parcela: R$ %.2f\n", parcela);

    if (score < 400) {
        printf("Financiamento Recusado\n");
        printf("Motivo: Score muito baixo\n");
    }
    else if (score <= 699) {
        if (parcela <= renda * 0.20) {
            printf("Financiamento Aprovado\n");
        }
        else {
            printf("Financiamento Recusado\n");
            printf("Motivo: Comprometimento de renda excessivo\n");
        }
    }
    else {
        if (parcela <= renda * 0.30) {
            printf("Financiamento Aprovado\n");
        }
        else {
            printf("Financiamento Recusado\n");
            printf("Motivo: Comprometimento de renda excessivo\n");
        }
    }

    return 0;
}
