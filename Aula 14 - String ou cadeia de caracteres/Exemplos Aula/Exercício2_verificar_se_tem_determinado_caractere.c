/* Exerc�cio 02 - Aula 14 - Verificar se uma string cont�m um
determinado caractere.*/

#include<stdio.h>
 int main () {

     char palavra[50], caractere;
     int quantidade = 0;

     //Definindo qual ser� a palavra
        printf("Escreva uma palavra: ");
        fgets(palavra, 50, stdin);

    //Definindo qual ser� o caractere que ser� verificado
        printf("\nQual caractere voc� quer que seja encontrado? ");
        scanf("%c", &caractere);

        printf("\n===============\n\n");

    //Verificando se cont�m o caractere na string

        for (int i = 0; i < 50; i++){
            if (caractere == palavra[i]){
                quantidade = quantidade + 1;
            }
        }

    //Exibindo resultado

        if (quantidade == 0){
        printf("'%c' n�o est� presente no string.\n\n",caractere);
        } else {
            printf("'%c' est� presente na string %d vez(es).\n\n", caractere, quantidade);
        }

 return 0;
 }
