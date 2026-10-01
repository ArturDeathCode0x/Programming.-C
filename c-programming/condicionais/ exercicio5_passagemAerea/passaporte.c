#include <stdio.h>

int main() {

    int continente;
    int passaporte;
    int visto;
    int vacinacao;


    printf("Escolha o continente de destino:\n");
    printf("1 - America do Norte\n");
    printf("2 - Europa\n");
    printf("3 - Asia\n");
    printf("Opcao: ");
    scanf("%d", &continente);


    printf("\nPossui passaporte valido?\n");
    printf("1 - Sim\n");
    printf("0 - Nao\n");
    printf("Resposta: ");
    scanf("%d", &passaporte);


    printf("\nPossui visto aprovado?\n");
    printf("1 - Sim\n");
    printf("0 - Nao\n");
    printf("Resposta: ");
    scanf("%d", &visto);


    printf("\nPossui comprovante de vacinacao em dia?\n");
    printf("1 - Sim\n");
    printf("0 - Nao\n");
    printf("Resposta: ");
    scanf("%d", &vacinacao);


    // Regra geral: passaporte e obrigatorio
    if (passaporte == 0) {

        printf("\nEmbarque Negado\n");
        printf("Motivo: Passaporte invalido ou ausente.\n");

        return 0;
    }


    switch (continente) {

        // AMERICA DO NORTE
        case 1:

            if (visto == 1 && vacinacao == 1) {

                printf("\nEmbarque Autorizado\n");

            }
            else {

                printf("\nEmbarque Negado\n");

                if (visto == 0) {
                    printf("Motivo: Visto nao aprovado.\n");
                }

                if (vacinacao == 0) {
                    printf("Motivo: Vacinacao nao esta em dia.\n");
                }
            }

            break;


        // EUROPA
        case 2:

            if (vacinacao == 1) {

                printf("\nEmbarque Autorizado\n");

            }
            else {

                printf("\nEmbarque Negado\n");
                printf("Motivo: Vacinacao nao esta em dia.\n");

            }

            break;


        // ASIA
        case 3:

            if (visto == 1 || vacinacao == 1) {

                printf("\nEmbarque Autorizado\n");

            }
            else {

                printf("\nEmbarque Negado\n");
                printf("Motivo: Necessario visto aprovado ou vacinacao em dia.\n");

            }

            break;


        default:

            printf("\nContinente invalido.\n");

    }


    return 0;
}
