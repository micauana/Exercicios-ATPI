/* Exercício 01 - Aula 13 - Ler e armazenar elementos em um vetor.
Em seguida, exibir o vetor e a soma.*/

#include<stdio.h>

int main (){

    int vetor[5], num, soma = 0;

    //Coletando os elementos do vetor//
        printf("Forneça cinco numeros: \n");

        for (int i=0; i<5; i++){
            scanf("%d", &num);
            vetor[i] = num;
        }

    //Definindo soma//

        for (int i=0; i<5; i++){
            soma = soma + vetor[i];
        }

    //Exibindo o vetor e a soma//
        printf("Soma = %d\n", soma);
        printf("Vetor =");

        for (int i=0; i<5; i++){
            printf(" %d ", vetor[i]);

        }


}
