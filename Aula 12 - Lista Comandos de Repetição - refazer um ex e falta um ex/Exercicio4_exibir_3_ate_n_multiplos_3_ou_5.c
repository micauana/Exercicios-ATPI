/* Exerc�cio 04 - Aula 12 - Fa�a um programa para ler um valor inteiro e positivo N. Em seguida, deve-se exibir todos os n�meros de 3 a N que s�o
m�ltiplos de 3 ou 5.*/

#include<stdio.h>

int main () {

    int n;

        printf ("Forne�a um valor inteiro e positivo: \n");
        scanf("%d", &n);
         printf("\nN�meros de 3 a N que s�o m�ltiplos de 3 ou 5 ->");

        for (n; n >= 3; n--){

            if (n == 3){
                printf(" %d.", n);
            }
            if ((n % 3 == 0 || n % 5 == 0) && n != 3){
                printf(" %d,", n);
            }
        }

}
