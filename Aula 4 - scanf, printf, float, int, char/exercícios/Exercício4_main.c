////Exercício 4 - aula 4 - Calcular media aritmetica entre quatro notas//
#include<stdio.h>
int main (){
float nota1, nota2, nota3, nota4, media;
printf("Nota 1: \n");
scanf("%f", &nota1);
printf("Nota 2: \n");
scanf("%f", &nota2);
printf("Nota 3: \n");
scanf("%f", &nota3);
printf("Nota 4: \n");
scanf("%f", &nota4);
media = (nota1 + nota2 + nota3 + nota4)/4;
printf("Media: %f", media);
return 0;
}