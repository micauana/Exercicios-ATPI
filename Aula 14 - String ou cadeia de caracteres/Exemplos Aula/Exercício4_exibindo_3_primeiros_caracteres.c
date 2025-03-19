/* Exercício 4 - Aula 14 - Exibir os 3 primeiros caracteres de uma
string.*/
#include<stdio.h>

int main () {

    char frase[100];

    printf("Escreva uma frase: ");
    fgets(frase, 100, stdin);

    printf("\n Primeiro caractere: %c", frase[0]);
    printf("\n Segundo caractere: %c", frase[1]);
    printf("\n Terceiro caractere: %c", frase[2]);


return 0;
}
