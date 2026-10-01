#include <stdio.h>

int main(){

int quantidade, capacidade;

printf("digite quantidade:");
scanf("%d",&quantidade);

printf("digite capacidade:");
scanf("%d",&capacidade);


int calculo =   quantidade/capacidade , sobra = quantidade%capacidade; 

printf("capacidade:%d\nsobrou:%d",calculo ,sobra);

return 0;

}
