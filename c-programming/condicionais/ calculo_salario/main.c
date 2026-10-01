#include <stdio.h>

int main() {

    // Declaração das variáveis
    // salario: armazena o salário informado pelo usuário
    // calculo: armazena o valor do imposto
    // bruto: armazena o salário depois do desconto do imposto
    float salario;
    float calculo;
    float bruto;

    // Exibe uma mensagem solicitando o salário
    printf("Digite o seu salario: ");

    // Recebe o salário digitado pelo usuário
    // %f é utilizado para receber valores do tipo float
    // &salario indica o endereço da variável onde o valor será armazenado
    scanf("%f", &salario);

    // Verifica se o salário é menor ou igual a R$ 2.000
    // Nesse caso, não existe cobrança de imposto
    if (salario <= 2000) {

        // Exibe o salário sem imposto
        // %.2f mostra o valor com duas casas decimais
        printf("Sem imposto: %.2f\n", salario);
    }

    // Verifica se o salário é maior que R$ 2.000
    // e menor que R$ 4.000
    else if (salario > 2000 && salario < 4000) {

        // Calcula 15% de imposto sobre o salário
        // 0.15 representa 15%
        calculo = salario * 0.15;

        // Subtrai o imposto do salário
        // para descobrir o valor restante
        bruto = salario - calculo;

        // Exibe o valor do imposto
        // %% é utilizado para mostrar o símbolo %
        printf("15%% de imposto: %.2f\n", calculo);

        // Exibe o salário após o desconto
        printf("Seu salario apos o imposto: %.2f\n", bruto);
    }

    // Caso o salário não esteja nas condições anteriores,
    // significa que ele é maior ou igual a R$ 4.000
    else {

        // Calcula 22,5% do salário
        // e adiciona o imposto fixo de R$ 300
        calculo = salario * 0.225 + 300;

        // Subtrai o imposto calculado do salário
        bruto = salario - calculo;

        // Exibe o valor total do imposto
        printf("22.5%% de imposto + imposto fixo de 300: %.2f\n", calculo);

        // Exibe o salário após o desconto do imposto
        printf("Seu salario apos o imposto: %.2f\n", bruto);
    }

    // Finaliza o programa
    return 0;
}

