/* Exerc�cio 04 -  Aula 14 -   Fa�a um programa para ler uma string que represente um padr�o bin�rio (0s e
1s). Em seguida, deve-se substituir as ocorr�ncias de um caractere �0� pelo
caractere �1�. Por fim, exibir a nova string.*/

#include<stdio.h>

int main () {

    char binario[1000];
    int i = 0;

    printf("Forne�a um n�mero bin�rio: ");
    gets(binario);

    while (binario[i] != '\0'){
        if (binario[i] == '0'){
            binario[i] = '1';
        }
        i++;
    }

    printf("\n=============\n\n");
    printf("Novo padr�o bin�rio: ");
    printf("%s", binario);
    printf("\n\n");

return 0;
}
