/* Exercício 12 - Aula 14 - A concatenação de strings é uma operação muito comum e que une o conteúdo
de duas strings. Por exemplo: a string “bom” concatenada com a string “dia”
resulta na string “bomdia”. Faça um programa que leia duas strings e efetue a
concatenação da segunda string na primeira. Por exemplo: string1 tem o conteúdo
“bom” e a string2 tem o conteúdo “dia”; após a concatenação a string1 terá o
conteúdo “bomdia”.*/

#include<stdio.h>

int main () {

    char string1[1000], string2[1000];
    int i = 0, e = 0;

    printf("Forneça o conteúdo da primeira string: ");
    gets(string1);
    printf("\n\nForneça o conteúdo da segunda string: ");
    gets(string2);

    //Descobrindo qual o vetor que está armazenado o fim de string na string1
        while (string1[i] != '\0'){
            i++;
        }

    //Descobrindo qual o vetor que está armazenado o fim de string na string2
        while (string2[e] != '\0'){
            e++;
        }

    //Colocando string2 na string1
        for (int b = i, a = 0; a < e; a++, b++){
            string1[b] = string2[a];
        }

        printf("\n======\n\n");

        printf("Concatenação: ");

    //Exibindo a concatenação
        printf("%s", string1);

        printf("\n\n");

return 0;
}
