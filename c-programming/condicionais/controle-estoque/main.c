
#include <stdio.h>

int main(){

    // Declaração das variáveis
    int unidade;
    int estoque;
    int vendido;
    int estoque_atualizado;

    // Atribuindo valores às variáveis
    unidade = 250;
    estoque = 100;

    // Pede a quantidade de unidades vendidas
    printf("digite as unidades vendidas: ");

    // Recebe a quantidade vendida
    scanf("%d", &vendido);

    // Calcula o estoque atualizado
    estoque_atualizado = unidade - vendido + estoque;

    // Verifica se a quantidade vendida
    // é maior que o estoque disponível
    if (vendido > unidade + estoque){

        printf("sem estoque");

    }

    else{

        printf("estoque atualizado%d\nvendidos%d",
               estoque_atualizado, vendido);

    }

    // Mostra o estoque atualizado e as unidades vendidas
    printf("unidade %d\n vendido%d ",
           estoque_atualizado, vendido);

    return 0;
}

