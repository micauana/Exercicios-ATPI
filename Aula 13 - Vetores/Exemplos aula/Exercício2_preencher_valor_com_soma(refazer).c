/* Exercício 02 - Aula 13 -  Preencher um vetor com a soma
acumulada de 1 a N. */

#include<stdio.h>

int main (){

    int n, soma = 0;

    //Coletando o valor de n//
        printf("Valor de N: \n");
        scanf("%d", &n);

    //Armazenando e exibindo vetores//

        printf("Valores armazenados = ");

        int vetores[1000];

            for(int i=0; i<=n; i++){
                soma = soma + i;
                vetores[i-1] = soma;
        }
            for (int i=0; i<n; i++){
            printf(" %d ", vetores[i]);
            }


}
