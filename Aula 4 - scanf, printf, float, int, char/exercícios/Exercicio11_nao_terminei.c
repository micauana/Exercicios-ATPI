//Exercício 11 - aula 4 - notas e pesos variaveis, depois media//
#include<stdio.h>
int main(){
float nota1, peso1, nota2, peso2, media;
printf("Forneça a primeira nota: \n");
scanf("%f",&nota1);
printf("Forneça peso 1: \n");
scanf("%f", &peso1);
printf("Forneça a segunda nota: \n");
scanf("%f",&nota2);
printf("Forneça peso 2: \n");
scanf("%f",&peso2);
media = (peso1*nota1 + peso2*nota2)/(peso1 + peso2);
printf("Média: %f",media);
return 0;
}
