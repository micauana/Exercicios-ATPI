/* Exerc�cio 05 - Aula 12 - Fa�a um programa para ler um inteiro positivo e verificar se ele � primo. Sabendo que um n�mero primo � aquele que
� dividido apenas por um e por ele mesmo.*/

#include<stdio.h>

int main (){

int numero, nao_primo =0;

    printf("Forne�a um n�mero: ");
    scanf("%d", &numero);

    for (int i=2; i < numero; i++){

         if (numero % i == 0){ //um n�mero primo � aquele que � dividido apenas por um e por ele mesmo.
            nao_primo = 1;
         }

         }

         if(nao_primo == 0){
            printf("N�mero primo.");
         } else {
            printf("N�mero n�o � primo.");
    }


}
