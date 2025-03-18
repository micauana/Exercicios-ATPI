//Exercicio 5 - aula 4 - Real para Dólar//
#include<stdio.h>
int main (){
float real,dolar;
printf("Forneça o valor em Real (R$): \n");
scanf("%f", &real);
dolar = real/5;
printf("O valor em Dólar ($): %f", dolar);
return 0;
}