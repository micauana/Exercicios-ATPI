/* Exercício 2 - Aula 15 - Faça um programa para ler uma string e apresentar o seu tamanho (quantidade
caracteres da frase).*/

#include<stdio.h>
#include<string.h>

int main () {

    char string[1000];
    int tamanho;

    printf("Digite o que você quiser: ");
    gets(string);

    tamanho = strlen(string);

    printf("\n============\n\n");

    printf("Tamanho da string: %d", tamanho);

    printf("\n\n");

return 0;
}
