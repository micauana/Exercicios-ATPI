/* Exerc�cio 12 - Aula 14 - A concatena��o de strings � uma opera��o muito comum e que une o conte�do
de duas strings. Por exemplo: a string �bom� concatenada com a string �dia�
resulta na string �bomdia�. Fa�a um programa que leia duas strings e efetue a
concatena��o da segunda string na primeira. Por exemplo: string1 tem o conte�do
�bom� e a string2 tem o conte�do �dia�; ap�s a concatena��o a string1 ter� o
conte�do �bomdia�.*/

#include<stdio.h>

int main () {

    char string1[1000], string2[1000];
    int i = 0, e = 0;

    printf("Forne�a o conte�do da primeira string: ");
    gets(string1);
    printf("\n\nForne�a o conte�do da segunda string: ");
    gets(string2);

    //Descobrindo qual o vetor que est� armazenado o fim de string na string1
        while (string1[i] != '\0'){
            i++;
        }

    //Descobrindo qual o vetor que est� armazenado o fim de string na string2
        while (string2[e] != '\0'){
            e++;
        }

    //Colocando string2 na string1
        for (int b = i, a = 0; a < e; a++, b++){
            string1[b] = string2[a];
        }

        printf("\n======\n\n");

        printf("Concatena��o: ");

    //Exibindo a concatena��o
        printf("%s", string1);

        printf("\n\n");

return 0;
}
