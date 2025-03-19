/* Exercício 05 - Aula 14 - Exibir os 3 últimos caracteres de uma
string.*/

#include<stdio.h>

int main () {

    char frase[100], i = 0;

    printf("Escreva uma frase: ");
    fgets(frase, 100, stdin);

    printf("\n============\n\n");

        //Percorrendo o string e coletando o vetor do \0

            while (frase[i] != '\n'){
                    i++;
            }

        printf("Tamanho da string: %d", i);

printf("\nÚltimos três caracteres: ");
        printf(" %c ", frase[i - 3]);
        printf(" %c ", frase[i - 2]);
        printf(" %c \n\n", frase[i - 1]);



return 0;
}
