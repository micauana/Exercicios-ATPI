/* Exercício 03 - Lista 13 - Faça um programa para ler número inteiros positivos até que um número menor
ou igual a zero seja digitado. Esses valores devem ser armazenados em um vetor.
Após a leitura, seu programa deverá percorrer o vetor para encontrar o maior
elemento, exibir o vetor e o maior elemento. */

#include<stdio.h>

int main () {

    int numeros[1000], maior, cont = 0, i = 0, num;

        //Coletando o número e definindo o que deve acontecer com ele

            do {
                printf("Forneça um número: \n");
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

               printf("Números que foram armazenados: ");
               for(int a = 0; a < i; a++){
               printf("  %d", numeros[i]);
               }

        //Percorrendo o vetor e definindo qual número é o maior

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
