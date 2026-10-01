#include <stdio.h>
#include <stdbool.h>

int main() {

    float faturamento;
    float custo;
    float imposto;

    faturamento = 2000;
    custo = 1000;
    imposto = 10.0 / 100.0;

    // Calcula o valor do imposto
    float taxa_imposto = faturamento * imposto;

    // Calcula o lucro
    float lucro = faturamento - custo - taxa_imposto;

    // Calcula a margem de lucro
    float margem = lucro / faturamento;

    printf("Seu lucro foi de: R$ %.2f\n", lucro);
    printf("Sua taxa de imposto foi de: R$ %.2f\n", taxa_imposto);
    printf("Sua margem foi de: %.2f%%\n", margem * 100);

    // Meta de margem: 30%
    bool margem_atingida = margem >= 0.30;

    if (margem_atingida) {
        printf("Sua margem foi atingida!\n");
    } else {
        printf("Margem nao atingida.\n");
    }

    return 0;
}
