/* Exerc�cio 6 - Aula 15 - Fa�a uma programa para ler uma palavra a exibi-la com todos os caracteres em
mai�sculo. Note que alguns caracteres podem estar em mai�sculo, quando
digitada pelo usu�rio. Exemplo:
Digite frase: Papagaio
Frase alterada: PAPAGAIO*/

#include<stdio.h>
#include<string.h>

int main () {

    char palavra[100];

    printf("Forne�a uma palavra: ");
    gets(palavra);

    printf("\n=========\n\n");

    for (int i = 0; palavra[i] != '\0'; i++){
        if (palavra[i] >= 'a' && palavra[i] <= 'z'){
            palavra[i] = palavra [i] - 32;
        }
    }

    printf("Palavra em mai�sculo: %s", palavra);

    printf("\n\n");

return 0;
}
