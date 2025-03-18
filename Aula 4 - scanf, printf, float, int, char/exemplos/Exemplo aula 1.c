/*Programa para calcular a média de duas notas
*/
#include<stdio.h>
int main(){
    float nota1, nota2, media;
    printf("Digite Nota1: ");
    scanf("%f",&nota1);
    printf("Digite Nota2: ");
    scanf("%f",&nota2);
    media = (nota1 + nota2) / 2;
    printf("Media: %.2f",media);
    return 0;
}
