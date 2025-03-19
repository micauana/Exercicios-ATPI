/* Exercício 4 - Aula 13 - Preencher um vetor com N valores
aleatórios de 0 a 9.*/

#include<stdio.h>

int main () {


    int vetor[100], N;

        //Coletando quantos valores aleatórios preencherão o vetor
            printf("Forneça o valor de N: ");
            scanf("%d", &N);

        //Definindo os valores e preenchendo o vetor

            for (int i=0; i<N; i++){
                vetor[i] = rand () % 10;
            }

        //Exibindo valores do vetor

            printf("\n==================\n");
            printf("Valores armazenados: ");

            for (int v = 0; v<N; v++){
                printf(" %d,", vetor[v]);
            }


return 0;
}
