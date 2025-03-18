//Exercício 3 - aula 4 - ler três valores inteiros e mostrar soma deles//
#include<stdio.h>
int main(){
int num1,num2,num3,soma;
printf("Forneça o primeiro número: \n");
scanf("%d",&num1);
printf("Forneça o segundo número: \n");
scanf("%d",&num2);
printf("Froneça o terceiro número: \n");
scanf("%d", &num3);
soma = num1 + num2 + num3;
printf("Soma = %d", soma);
return 0;
}