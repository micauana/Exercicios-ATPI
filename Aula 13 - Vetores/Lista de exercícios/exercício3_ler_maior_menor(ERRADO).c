/* Exerc�cio 03 - Lista 13 - Fa�a um programa para ler n�mero inteiros positivos at� que um n�mero menor
ou igual a zero seja digitado. Esses valores devem ser armazenados em um vetor.
Ap�s a leitura, seu programa dever� percorrer o vetor para encontrar o maior
elemento, exibir o vetor e o maior elemento. */

#include<stdio.h>

int main () {

    int numeros[1000], maior, cont = 0, i = 0, num;

        //Coletando o n�mero e definindo o que deve acontecer com ele

            do {
                printf("Forne�a um n�mero: \n");
               scanf("%d", &num);

                printf("\n=============\n");

                if (num <= 0){
                    break;

                } else {
                    numeros [i] = num;
                    printf("  %d", numeros[i]);
                    }
                    cont++;
                    i++;
               }while (num > 0);

               printf("N�meros que foram armazenados: ");
               for(int a = 0; a < i; a++){
               printf("  %d", numeros[i]);
               }

        //Percorrendo o vetor e definindo qual n�mero � o maior

            int vetor;

                maior = numeros[0];

            for (int  b = 1; b < cont; b++){

                if (numeros[b] > maior){
                    vetor = b;
                    maior = numeros[b];
                }

            }

            printf("\n====================\n");
            printf("Vetor do maior valor: %d", vetor);
            printf("Maior valor: %d", maior);
            printf("\n====================\n");





return 0;
}
