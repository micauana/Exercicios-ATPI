/* Exerc�cio 1 - Aula 14 - Fa�a um programa que leia uma string e a imprima o seu conte�do.*/

#include<stdio.h>

int main () {

    char frase[1000];

    printf("Escreva uma frase: ");
    fgets(frase, 1000, stdin);

    printf("\n\nFrase escrita: %s", frase);

return 0;
}
