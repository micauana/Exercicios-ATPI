/* Exercício 06 - Aula 14 - Faça um programa que receba uma string e substitua as vogais pelo caractere
‘_’. Em seguida, exibe-se o conteúdo da string.*/

#include<stdio.h>

int main () {

    char texto[1000];
    int i = 0;

    printf("Escreva um texto, uma frase ou uma palavra: ");
    gets(texto);

    while (texto[i]){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
            texto[i] = '_';
        }
        i++;
    }

    printf("%s", texto);


return 0;
}
