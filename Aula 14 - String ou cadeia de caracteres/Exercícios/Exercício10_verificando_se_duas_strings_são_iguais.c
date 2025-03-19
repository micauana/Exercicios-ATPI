/* Exercício 10 - Aula 14 - Faça um programa para ler duas strings e verificar se elas são iguais, ou seja,
verificar se o conteúdo é o mesmo nas duas frases informadas.*/

#include<stdio.h>

int main () {

    char string1[1000], string2[1000];
    int diferente = 0, i = 0;

    //Coletando as strings
    printf("Escreva uma frase: ");
    gets(string1);

    printf("\n\nEscreva a segunda frase (pode ser igual ou diferente): ");
    gets(string2);

    //Verificando se são diferentes
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
            printf("As frases são diferentes.\n\n");
        } else {
            printf("As frases são iguais.\n\n");
        }


return 0;
}
