/* Exerc�cio 10 - Aula 14 - Fa�a um programa para ler duas strings e verificar se elas s�o iguais, ou seja,
verificar se o conte�do � o mesmo nas duas frases informadas.*/

#include<stdio.h>

int main () {

    char string1[1000], string2[1000];
    int diferente = 0, i = 0;

    //Coletando as strings
    printf("Escreva uma frase: ");
    gets(string1);

    printf("\n\nEscreva a segunda frase (pode ser igual ou diferente): ");
    gets(string2);

    //Verificando se s�o diferentes
        while (string1[i] && string2[i]){

            if(string1[i] != string2[i]){
                diferente = 1;
                break;
            } else if (string1[i] == '\0' && string2[i] == '\0'){
                break;
            }
            i++;
        }

        printf("\n=====\n\n");

        if (diferente == 1){
            printf("As frases s�o diferentes.\n\n");
        } else {
            printf("As frases s�o iguais.\n\n");
        }


return 0;
}
