/* Exercício 05 - Aula 12 - Faça um programa para ler um inteiro positivo e verificar se ele é primo. Sabendo que um número primo é aquele que
é dividido apenas por um e por ele mesmo.*/

#include<stdio.h>

int main (){

int numero, nao_primo =0;

    printf("Forneça um número: ");
    scanf("%d", &numero);

    for (int i=2; i < numero; i++){

         if (numero % i == 0){ //um número primo é aquele que é dividido apenas por um e por ele mesmo.
            nao_primo = 1;
         }

         }

         if(nao_primo == 0){
            printf("Número primo.");
         } else {
            printf("Número não é primo.");
    }


}
