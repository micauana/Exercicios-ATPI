/* Exercício 02 - Aula 14 - Verificar se uma string contém um
determinado caractere.*/

#include<stdio.h>
 int main () {

     char palavra[50], caractere;
     int quantidade = 0;

     //Definindo qual será a palavra
        printf("Escreva uma palavra: ");
        fgets(palavra, 50, stdin);

    //Definindo qual será o caractere que será verificado
        printf("\nQual caractere você quer que seja encontrado? ");
        scanf("%c", &caractere);

        printf("\n===============\n\n");

    //Verificando se contém o caractere na string

        for (int i = 0; i < 50; i++){
            if (caractere == palavra[i]){
                quantidade = quantidade + 1;
            }
        }

    //Exibindo resultado

        if (quantidade == 0){
        printf("'%c' não está presente no string.\n\n",caractere);
        } else {
            printf("'%c' está presente na string %d vez(es).\n\n", caractere, quantidade);
        }

 return 0;
 }
