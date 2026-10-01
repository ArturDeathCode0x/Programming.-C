#include <stdio.h>

int main(){

float valor;
float bonus;
float faturamento;

printf("digite valor do faturamento:");
scanf("%f",&valor);

printf("digite bonus:");

scanf("%f",&bonus);

faturamento = valor * bonus;
printf("%.2f",faturamento);
return 0;



}
