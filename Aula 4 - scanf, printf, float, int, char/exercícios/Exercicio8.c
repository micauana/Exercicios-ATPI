//Exercício 8 - aula 4 - Valor do produto com desconto//
#include<stdio.h>
int main(){
float valor, desconto;
printf("Forneça o valor do produto: \n");
scanf("%f",&valor);
desconto = valor - 0.12*valor;
printf("Valor final: %f", desconto);
return 0;
}
