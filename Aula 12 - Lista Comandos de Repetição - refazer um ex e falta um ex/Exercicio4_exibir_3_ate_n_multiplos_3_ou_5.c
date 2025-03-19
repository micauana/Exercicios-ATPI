/* Exercício 04 - Aula 12 - Faça um programa para ler um valor inteiro e positivo N. Em seguida, deve-se exibir todos os números de 3 a N que são
múltiplos de 3 ou 5.*/

#include<stdio.h>

int main () {

    int n;

        printf ("Forneça um valor inteiro e positivo: \n");
        scanf("%d", &n);
         printf("\nNúmeros de 3 a N que são múltiplos de 3 ou 5 ->");

        for (n; n >= 3; n--){

            if (n == 3){
                printf(" %d.", n);
            }
            if ((n % 3 == 0 || n % 5 == 0) && n != 3){
                printf(" %d,", n);
            }
        }

}
