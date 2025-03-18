//Exercicio 7 - aula 4 - Tabuada de um número inteiro//
#include<stdio.h>
int main(){
int num, tabuada0, tabuada1, tabuada2;
printf("Forneça um número: \n");
scanf("%d",&num);
tabuada0 = num*0;
tabuada1 = num*1;
tabuada2 = num*2;
printf("Tabuada: \n");
printf("%d\n", tabuada0);
printf("%d\n", tabuada1);
printf("%d\n", tabuada2);
return 0;
}