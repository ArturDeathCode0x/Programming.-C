#include <stdio.h>

/*
 * Calcula e exibe uma Progressão Aritmética (PA).
 *
 * primeiro_termo: primeiro valor da sequência
 * razao: valor que será somado a cada termo
 * quantidade_termos: quantidade de termos que serão exibidos
 */
void calcula_pa(int primeiro_termo, int razao, int quantidade_termos) {

    // Guarda o termo que será exibido atualmente
    int termo_atual = primeiro_termo;

    // Repete até atingir a quantidade de termos desejada
    for (int i = 1; i <= quantidade_termos; i++) {

        // Exibe o termo atual da PA
        printf("PA: %d ", termo_atual);

        // Calcula o próximo termo
        termo_atual += razao;
    }
}


/*
 * Calcula e exibe uma Progressão Geométrica (PG).
 *
 * primeiro_termo: primeiro valor da sequência
 * razao: valor usado para multiplicar cada termo
 * quantidade_termos: quantidade de termos que serão exibidos
 */
void calcula_pg(int primeiro_termo, int razao, int quantidade_termos) {

    // Guarda o termo que será exibido atualmente
    int termo_atual = primeiro_termo;

    // Repete até atingir a quantidade de termos desejada
    for (int i = 1; i <= quantidade_termos; i++) {

        // Exibe o termo atual da PG
        printf("PG: %d ", termo_atual);

        // Calcula o próximo termo
        termo_atual *= razao;
    }
}


int main() {

    // Declara as variáveis utilizadas pelo programa
    int primeiro_termo;
    int razao;
    int quantidade_termos;


    // Solicita o primeiro termo
    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro_termo);


    // Solicita a razão
    printf("Digite a razao: ");
    scanf("%d", &razao);


    // Solicita a quantidade de termos
    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade_termos);


    // Verifica se a quantidade de termos é válida
    if (quantidade_termos <= 0) {

        printf("Erro: digite uma quantidade maior que 0.\n");

        // Encerra o programa informando que houve erro
        return -1;
    }


    // Calcula e exibe a Progressão Aritmética
    calcula_pa(
        primeiro_termo,
        razao,
        quantidade_termos
    );


    // Separador visual entre PA e PG
    printf("\n------------------------------------------\n");


    // Calcula e exibe a Progressão Geométrica
    calcula_pg(
        primeiro_termo,
        razao,
        quantidade_termos
    );


    // Finaliza o programa normalmente
    return 0;
}
