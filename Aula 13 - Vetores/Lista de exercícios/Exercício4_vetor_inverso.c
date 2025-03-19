/* Exerc�cio 04 - Aula 13 - Fa�a um programa para ler N n�meros e armazena-los em um vetor. O valor
de N � fornecido pelo usu�rio. Em seguida, imprima o vetor na ordem inversa*/

#include<stdio.h>

int main () {

    int N;
    float numeros[1000];

    //Coletando o valor de N
        printf("Quantos n�meros ser�o fornecidos? ");
        scanf("%d", &N);

        printf("\n=========\n\n");

    //Coletando N n�meros
        for(int i=0; i<N; i++){
            printf("Forne�a o %d� n�mero: ", i + 1);
            scanf("%f", &numeros[i]);
        }

        printf("\n==========\n\n");

    //Imprimindo os valores na ordem inversa:
        printf("Valores fornecidos na ordem inversa: ");
        for (int i = (N-1); i >= 0; i--){
            printf(" %.2f,", numeros[i]);
        }
        printf("\n\n");

return 0;
}
