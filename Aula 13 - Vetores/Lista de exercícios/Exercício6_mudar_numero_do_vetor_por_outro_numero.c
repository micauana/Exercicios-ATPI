/* Exerc�cio 06 - Aula 13 - 6) Fa�a um programa para ler N n�meros e armazena-los em um vetor. O valor
de N � fornecido pelo usu�rio. Em seguida, o usu�rio fornecer� um n�mero N1 e
outro n�mero N2. Seu programa deve substituir a ocorr�ncia de N1 por N2 no
vetor. Por exemplo:
Lista digitada: 4 5 6 7 3 5 2 3 6
N1: 3
N2: 5
Lista alterada: 4 5 6 7 5 5 2 5 6 */

#include<stdio.h>

int main () {

    int N, numeros[1000], N1, N2;

    //Definindo o valor de N
        printf("Quantos n�meros ser�o fornecidos? ");
        scanf("%d", &N);

        printf("\n===========\n\n");

    //Armazenando os N valores no vetor
        for (int i = 0; i < N; i++){
            printf("Forne�a o %d� n�mero: ", i + 1);
            scanf("%d", &numeros[i]);
        }

        printf("\n===============\n\n");

    //Definindo qual ser� o n�mero que ser� alterado e qual n�mero ir� em seu lugar
        printf("Qual n�mero ser� alterado? ");
        scanf("%d", &N1);
        printf("\nQual ser� o n�mero que o substituir�? ");
        scanf("%d", &N2);

        printf("\n=============\n\n");

    //Exibindo os primeiros valores do vetor
        printf("Lista digitada: ");
        for (int b = 0; b < N; b++){
            printf(" %d,", numeros[b]);
        }

    //Mudando o n�mero
        printf("\nN1 = %d", N1);
        printf("\nN2 = %d", N2);

        for (int a = 0; a < N; a++) {
            if (numeros[a] == N1){
                numeros[a] = N2;
            }
        }

    //Exibindo a lista alterada
        printf("\nLista alterada: ");
        for(int c = 0; c < N; c++){
            if (c == (N - 1)){
                printf(" %d.", numeros[c]);
            } else {
            printf(" %d,", numeros[c]);
            }
        }

return 0;
}
