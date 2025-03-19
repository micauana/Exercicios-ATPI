/* Exerc�cio 04 - Aula 13 - Fa�a um programa para ler N n�meros e armazena-los em um vetor. O valor
de N � fornecido pelo usu�rio. Em seguida, o usu�rio fornecer� um n�mero. Seu
programa deve verificar se esse n�mero est� na lista de valores digitados pelo
usu�rio, ou seja, verificar se esse valor est� no vetor e quantas vezes ele aparece. Por exemplo:
Lista digitada: 4 5 6 7 3 5 2 3 6
N�mero: 3
O n�mero 3 est� no vetor 1 vez*/

#include<stdio.h>

int main () {

    int numeros[1000], numero, N, aparece = 0;

    //Definindo valor de N
        printf("Quantos n�meros ser�o fornecidos? ");
        scanf("%d", &N);

        printf("\n===============\n\n");

    //Armazenando no vetor os n�meros
       for (int i=0; i<N; i++){
        printf("Forne�a o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
       }

       printf("\n=============\n\n");

    //Vendo qual n�mero ser� procurado
       printf("Qual n�mero voc� quer ver se est� presente no vetor? ");
       scanf("%d", &numero);

       printf("\n=============\n\n");

    //Verificando se o n�mero est� na sequ�ncia e quantas vezes ele aparece
        for(int i=0; i<N; i++){

            if (numeros[i] == numero){
                aparece = aparece + 1;
        }

        }
         if (aparece > 0){
                printf ("O n�mero %d aparece no vetor %d veze(s).", numero, aparece);
            } else {
                printf("O n�mero %d n�o aparece no vetor.", numero);
            }

        printf("\n\n");

return 0;
}
