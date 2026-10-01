#include <stdio.h>

int main() {

    // Guarda a quantidade total de segundos digitada pelo usuário
    int total_segundos;

    // Guarda a quantidade de semanas
    int semanas;

    // Guarda os segundos que sobraram depois de calcular as semanas
    int resto_semanas;

    // Guarda a quantidade de dias
    int dias;

    // Guarda os segundos que sobraram depois de calcular os dias
    int resto_dias;

    // Guarda a quantidade de horas
    int horas;

    // Guarda os segundos que sobraram depois de calcular as horas
    int resto_horas;

    // Guarda a quantidade de minutos
    int minutos;

    // Guarda os segundos que sobraram depois de calcular os minutos
    int resto_minutos;

    // Guarda os segundos finais
    int segundos;


    // Pede para o usuário digitar uma quantidade de segundos
    printf("Digite uma quantidade de segundos: ");

    // Recebe o valor digitado
    scanf("%d", &total_segundos);


    // 1 semana possui 604800 segundos
    // Divide o total de segundos por 604800
    // para descobrir quantas semanas existem
    semanas = total_segundos / 604800;

    // Calcula quantos segundos sobraram depois das semanas
    resto_semanas = total_segundos % 604800;


    // 1 dia possui 86400 segundos
    // Usa o resto das semanas para descobrir os dias
    dias = resto_semanas / 86400;

    // Calcula quantos segundos sobraram depois dos dias
    resto_dias = resto_semanas % 86400;


    // 1 hora possui 3600 segundos
    // Usa o resto dos dias para descobrir as horas
    horas = resto_dias / 3600;

    // Calcula quantos segundos sobraram depois das horas
    resto_horas = resto_dias % 3600;


    // 1 minuto possui 60 segundos
    // Usa o resto das horas para descobrir os minutos
    minutos = resto_horas / 60;

    // Calcula quantos segundos sobraram depois dos minutos
    resto_minutos = resto_horas % 60;


    // O que sobrou são os segundos
    segundos = resto_minutos;


    // Mostra o resultado final
    printf(
        "Semanas: %d\n"
        "Dias: %d\n"
        "Horas: %d\n"
        "Minutos: %d\n"
        "Segundos: %d\n",
        semanas,
        dias,
        horas,
        minutos,
        segundos
    );


    // Finaliza o programa
    return 0;
}
