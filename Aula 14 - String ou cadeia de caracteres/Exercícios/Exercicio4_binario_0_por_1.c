/* Exercício 04 -  Aula 14 -   Faça um programa para ler uma string que represente um padrão binário (0s e
1s). Em seguida, deve-se substituir as ocorrências de um caractere ‘0’ pelo
caractere ‘1’. Por fim, exibir a nova string.*/

#include<stdio.h>

int main () {

    char binario[1000];
    int i = 0;

    printf("Forneça um número binário: ");
    gets(binario);

    while (binario[i] != '\0'){
        if (binario[i] == '0'){
            binario[i] = '1';
        }
        i++;
    }

    printf("\n=============\n\n");
    printf("Novo padrão binário: ");
    printf("%s", binario);
    printf("\n\n");

return 0;
}
