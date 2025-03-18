/*Programa teste aula 4*/
#include<stdio.h>
int main (){
float media, nota1, nota2;
printf("Digite primeira nota: ");
scanf("%f",&nota1);
printf("Digite segunda nota: ");
scanf("%f",&nota2);
media = (nota1 + nota2) / 2;
printf("Media: %f\n",media);
printf("Nota1: %f \nNota2: %f",nota1,nota2);
return 0;
}
