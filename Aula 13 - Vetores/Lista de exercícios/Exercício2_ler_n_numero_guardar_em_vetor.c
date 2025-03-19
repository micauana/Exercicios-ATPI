/* Exerc�cio 02 - Aula 13 - Fa�a um programa para ler N n�meros e armazena-los em um vetor. O valor
de N � fornecido pelo usu�rio. Em seguida, o seu programa dever� exibir os
n�meros lidos. */

#include<stdio.h>

int main () {

    int N;
    float numeros[1000];

    //Definindo quantos n�meros ser�o fornecidos (N)
        printf("Quantos n�meros ser�o fornecidos? ");
        scanf("%d", &N);

    //Recebendo os n�meros e armazenando-osno vetor
        for (int i=0; i<N; i++){
            printf("\n Forne�a o %d� n�mero: ", i+1);
            scanf("%f", &numeros[i]);
        }

    //Exibindo os n�meros lidos
        printf("\n============\n");
        printf("N�meros armazenados: ");

        for (int a=0; a<N; a++){
            printf(" %.2f", numeros[a]);

        }
        printf("\n\n");

return 0;
}
