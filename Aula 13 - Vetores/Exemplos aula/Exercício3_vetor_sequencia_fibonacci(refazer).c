/* Exerc�cio 3 - Aula 13 -  Preencher um vetor com N elementos da
sequ�ncia de Fibonacci. Considere N>2.  RESOLVIDO PELO PROF*/

#include<stdio.h>

int main () {

    int vetor[100], num;

        //Recebendo o valor de N
        printf ("Forne�a o valor de N: \n");
        scanf("%d", &num);

        //Determinando os primeiros elementos da sequ�ncia de Fibonacci
        vetor[0] = 1;
        vetor[1] = 1;

        //Definindo o resto da sequ�ncia e j� preenchendo no vetor

            for (int i=2; i<=num; i++){
                vetor[i] = vetor [i-1] + vetor [i-2];

            }

        //Exibindo o que foi preenchido (n�o entendi 100% o motivo do show ser < que num

            printf("\n======================\n");
            printf("Valores do vetor: ");

            for (int show = 0; show < num; show++){
                printf(" %d,", vetor[show]);
            }

return 0;
}
