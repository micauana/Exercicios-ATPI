/* Exercício 01 - Aula 13 - Ler e armazenar elementos em um vetor.
Em seguida, exibir o vetor e a soma.*/

#include<stdio.h>

int main (){


    int num, soma = 0, q;

     printf("Quantos números serão fornecidos? \n");
     scanf("%d", &q);

     int vetor[q];

    //Coletando os elementos do vetor//
        printf("Forneça cinco numeros: \n");

        for (int i=0; i<q; i++){
            scanf("%d", &num);
            vetor[i] = num;
        }

    //Definindo soma//

        for (int i=0; i<q; i++){
            soma = soma + vetor[i];
        }

    //Exibindo o vetor e a soma//
        printf("Soma = %d\n", soma);
        printf("Vetor =");

        for (int i=0; i<q; i++){
            printf(" %d ", vetor[i]);

        }


}
