/* Exercício 4 - Aula 15 - Faça um programa para ler uma string e transferir o conteúdo para uma outra
varíavel string (char []).*/

#include<stdio.h>
#include<string.h>

int main () {

    char string1[100], string2[100];

    printf("String 1: ");
    gets(string1);
    printf("\nString 2: ");
    gets(string2);

    strcat(string1, string2);

    printf("\n============\n\n");

    printf("String 1 após a concatenação: %s", string1);

    printf("\n\n");


return;
}
