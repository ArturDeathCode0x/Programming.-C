#include <stdio.h>

// Função principal do programa
int main() {

    // Declara uma variável para armazenar
    // o número informado pelo usuário
    int user;

    // Declara uma variável para armazenar
    // o resultado da soma
    int soma;

    // Declara uma variável que será usada
    // para fazer a contagem
    int i;


    // Inicializa a variável soma com 0
    soma = 0;

    // Inicializa a variável i com 1
    i = 1;


    // Mostra uma mensagem pedindo um número
    printf("Digite numero: ");

    // Recebe o número digitado pelo usuário
    // %d indica que estamos recebendo um número inteiro
    // &user indica o endereço da variável onde o valor será armazenado
    scanf("%d", &user);


    // Inicia o laço de repetição
    // i começa em 1
    // Continua enquanto i for menor ou igual a user
    // i++ aumenta 1 a cada repetição
    for (i; i <= user; i++) {

        // Adiciona o valor atual de i à variável soma
        // É o mesmo que: soma = soma + i
        soma += i;
    }


    // Mostra o resultado da soma
    // %d mostra o valor inteiro de user
    // %d mostra o valor armazenado em soma
    printf("A soma de 1 a %d é:\n%d", user, soma);


    // Encerra o programa
    // 0 significa que o programa terminou normalmente
    return 0;
}
