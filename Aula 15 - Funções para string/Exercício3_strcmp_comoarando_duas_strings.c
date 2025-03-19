/* Exercício 3 - Aula 15 - Faça um programa para ler duas strings e verificar se elas são iguais, ou seja,
verificar se o conteúdo é o mesmo nas duas frases informadas.*/

#include<stdio.h>
#include<string.h>

int main () {

    char string1[100], string2[100];
    int comparacao;

    printf("String1: ");
    gets(string1);
    printf("\nString2: ");
    gets(string2);

    comparacao = strcmp(string1, string2);

    if(comparacao == 0){
        printf("\nAs duas são iguais.\n");
    } else {
        printf("\nNão são iguais.\n");
    }

return 0;
}
