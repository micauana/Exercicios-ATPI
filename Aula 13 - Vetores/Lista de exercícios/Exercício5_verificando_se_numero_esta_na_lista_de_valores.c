/* Exercício 04 - Aula 13 - Faça um programa para ler N números e armazena-los em um vetor. O valor
de N é fornecido pelo usuário. Em seguida, o usuário fornecerá um número. Seu
programa deve verificar se esse número está na lista de valores digitados pelo
usuário, ou seja, verificar se esse valor está no vetor e quantas vezes ele aparece. Por exemplo:
Lista digitada: 4 5 6 7 3 5 2 3 6
Número: 3
O número 3 está no vetor 1 vez*/

#include<stdio.h>

int main () {

    int numeros[1000], numero, N, aparece = 0;

    //Definindo valor de N
        printf("Quantos números serão fornecidos? ");
        scanf("%d", &N);

        printf("\n===============\n\n");

    //Armazenando no vetor os números
       for (int i=0; i<N; i++){
        printf("Forneça o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
       }

       printf("\n=============\n\n");

    //Vendo qual número será procurado
       printf("Qual número você quer ver se está presente no vetor? ");
       scanf("%d", &numero);

       printf("\n=============\n\n");

    //Verificando se o número está na sequência e quantas vezes ele aparece
        for(int i=0; i<N; i++){

            if (numeros[i] == numero){
                aparece = aparece + 1;
        }

        }
         if (aparece > 0){
                printf ("O número %d aparece no vetor %d veze(s).", numero, aparece);
            } else {
                printf("O número %d não aparece no vetor.", numero);
            }

        printf("\n\n");

return 0;
}
