/* Exerc�cio 09 - Aula 13 - Fa�a um programa para ler 10 n�meros DIFERENTES a serem armazenados
em um vetor. Os n�meros dever�o ser armazenados no vetor na ordem que forem
lidos, sendo que caso o usu�rio digite um n�mero que j� foi digitado
anteriormente, o programa dever� pedir para o usu�rio digitar outro n�mero. Note
que cada valor digitado pelo usu�rio deve ser pesquisado no vetor, verificando se
ele existe entre os n�meros que j� foram fornecidos. Exibir na tela o vetor final
que foi digitado, o qual n�o ter� repeti��o de valores. */

#include<stdio.h>

int main () {

    int numeros[1000];

    printf("Forne�a dez n�meros diferentes: \n");
    printf("\n");

    //Armazenando os valores
        for (int i = 0; i < 10; i++){
            printf("%d� n�mero: ", i + 1);
            scanf("%d", &numeros[i]);

            for (int b = 0; b < i; b++){
                if (numeros[i] == numeros[b]){
                    printf("\n !N�mero j� fornecido!\n");
                    i--;
                }
            }


    }

    printf("\n==============\n");

    //Exibindo valores que foram armazenados
    printf("N�meros armazenados: ");
        for (int a = 0; a < 10; a++){
            printf(" %d ", numeros[a]);
        }
        printf("\n\n");


return 0;
}
