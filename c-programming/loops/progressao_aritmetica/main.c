#include <stdio.h>

// Calcula uma Progressão Aritmética (PA)
// O usuário informa:
// - Primeiro termo
// - Razão
// - Quantidade de termos

int main() {

    // Declara as variáveis
    int primeiro_termo;
    int razao;
    int quantidade_termos;


    // Solicita o primeiro termo da PA
    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro_termo);


    // Solicita a razão da PA
    printf("Digite a razao: ");
    scanf("%d", &razao);


    // Solicita a quantidade de termos
    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade_termos);


    // Verifica se a quantidade de termos é válida
    if (quantidade_termos <= 0) {

        printf("Erro: digite um numero maior que 0.\n");
    }

    else {

        // Mostra o primeiro termo
        printf("O 1° termo e: %d\n", primeiro_termo);


        // Calcula e mostra os próximos termos
        for (int i = 1; i < quantidade_termos; i++) {

            // Adiciona a razão ao termo anterior
            // Exemplo: 2 + 3 = 5
            primeiro_termo += razao;

            // Mostra o próximo termo
            printf("O %d° termo e: %d\n", i + 1, primeiro_termo);
        }
    }


    // Finaliza o programa
    return 0;
}
