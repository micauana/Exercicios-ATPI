//Exercicio 6 - aula 4 - Antecessor e Sucessor de um número inteiro//
#include<stdio.h>
int main (){
int num, ant, suc;
printf("Forneça um número: \n");
scanf("%d", &num);
ant = num - 1;
suc = num + 1;
printf("Antecessor: %d\nSucessor: %d", ant, suc);
return 0;
}