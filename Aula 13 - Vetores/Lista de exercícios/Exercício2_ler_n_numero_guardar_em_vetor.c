/* Exercício 02 - Aula 13 - Faça um programa para ler N números e armazena-los em um vetor. O valor
de N é fornecido pelo usuário. Em seguida, o seu programa deverá exibir os
números lidos. */

#include<stdio.h>

int main () {

    int N;
    float numeros[1000];

    //Definindo quantos números serão fornecidos (N)
        printf("Quantos números serão fornecidos? ");
        scanf("%d", &N);

    //Recebendo os números e armazenando-osno vetor
        for (int i=0; i<N; i++){
            printf("\n Forneça o %dº número: ", i+1);
            scanf("%f", &numeros[i]);
        }

    //Exibindo os números lidos
        printf("\n============\n");
        printf("Números armazenados: ");

        for (int a=0; a<N; a++){
            printf(" %.2f", numeros[a]);

        }
        printf("\n\n");

return 0;
}
