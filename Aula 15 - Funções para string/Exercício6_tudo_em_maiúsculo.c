/* Exercício 6 - Aula 15 - Faça uma programa para ler uma palavra a exibi-la com todos os caracteres em
maiúsculo. Note que alguns caracteres podem estar em maiúsculo, quando
digitada pelo usuário. Exemplo:
Digite frase: Papagaio
Frase alterada: PAPAGAIO*/

#include<stdio.h>
#include<string.h>

int main () {

    char palavra[100];

    printf("Forneça uma palavra: ");
    gets(palavra);

    printf("\n=========\n\n");

    for (int i = 0; palavra[i] != '\0'; i++){
        if (palavra[i] >= 'a' && palavra[i] <= 'z'){
            palavra[i] = palavra [i] - 32;
        }
    }

    printf("Palavra em maiúsculo: %s", palavra);

    printf("\n\n");

return 0;
}
