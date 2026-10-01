#include <stdio.h>
#include <stdbool.h>
int main(){

float faturamento;
float custo;
float imposto;

printf("digite faturamento\n");
scanf("%f",&faturamento);

printf("digite seu  custo\n");
scanf("%f",&custo);

printf("digite seu imposto\n");
scanf("%f",&imposto); imposto = imposto /100;

float taxa_imposto = faturamento * imposto;
float lucro = faturamento - custo - taxa_imposto;
float margem = lucro / imposto ;

printf("\nseu lucro foi de %.2f",lucro);
printf("\nsua taxa imposto foi de %.2f",taxa_imposto);
printf("\nsua margem foi de %.2f %",margem * 100);

bool  margem_atingida = margem > 0.40;

if (margem_atingida){
 printf("\n sua margem foi batida");

}
else{

printf("margem  não batida");

}

 return 0;

}
