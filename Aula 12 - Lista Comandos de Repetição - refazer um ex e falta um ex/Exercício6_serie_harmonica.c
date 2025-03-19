/*Exercício 06 - Aula 12 - Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma da série harmônica:
H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n . Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).*/

#include<stdio.h>

int main () {

int n;
float serie_harmonica = 0;

    //Coletando o valor de n//
        printf("Forneça um valor n inteiro e positivo: ");
        scanf("%d", &n);
        printf("Série harmônica de %d -> ", n);

    //Definindo a serie harmonica//

        for (int i=1; i<=n; i++){
        serie_harmonica = serie_harmonica + (1.0/i);

        if (i<n){
            printf("1/%d + ", i);
        } else {
             printf("1/%d = ", i);
        }
        }
        printf("%f", serie_harmonica);
}
