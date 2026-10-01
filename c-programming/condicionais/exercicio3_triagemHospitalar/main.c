#include <stdio.h>

int main() {

    int dor;
    int respiracao;
    int febre;

    printf("Digite a gravidade da Dor Toracica (0 a 3): ");
    scanf("%d", &dor);

    printf("Digite a gravidade da Dificuldade Respiratoria (0 a 3): ");
    scanf("%d", &respiracao);

    printf("Digite a gravidade da Febre (0 a 3): ");
    scanf("%d", &febre);


    // VERMELHA
    if (dor == 3 || respiracao == 3) {

        printf("\nClassificacao: VERMELHA\n");
        printf("Emergencia - Atendimento Imediato\n");

    }

    // LARANJA
    else if ((dor == 2 || respiracao == 2) && febre >= 2) {

        printf("\nClassificacao: LARANJA\n");
        printf("Muito Urgente - Ate 10 minutos\n");

    }

    // AMARELA
    else if (dor >= 2 || respiracao >= 2 || febre >= 2) {

        printf("\nClassificacao: AMARELA\n");
        printf("Urgente - Ate 60 minutos\n");

    }

    // VERDE
    else if (dor == 1 || respiracao == 1 || febre == 1) {

        printf("\nClassificacao: VERDE\n");
        printf("Pouco Urgente\n");

    }

    // AZUL
    else {

        printf("\nClassificacao: AZUL\n");
        printf("Nao Urgente\n");

    }

    return 0;
}


