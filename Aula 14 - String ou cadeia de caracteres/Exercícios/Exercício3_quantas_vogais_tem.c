/* Exercício 03 - Aula 14 - Faça um programa para ler uma string e apresentar quantas letras ‘a’, ‘e’, ‘i’,
‘o’ e ‘u’ estão presentes na frase.*/

#include<stdio.h>

int main () {

    char texto[10000];
    int i = 0, a = 0, e = 0, letra_i = 0, o = 0, u = 0;

    printf("Forneça um texto, frase ou palavra: \n");
    gets(texto);

    while (texto[i] != '\0'){

            switch(texto[i]){

            case 'a':
                a = a + 1;
                break;

            case 'e':
                e = e + 1;
                break;

            case 'i':
                letra_i = letra_i + 1;
                break;

            case 'o':
                o = o + 1;
                break;

            case 'u':
                u = u + 1;
                break;

            }

        i++;
    }

    printf("\n============\n\n");

    printf("A letra 'a' aparece no texto %d vez(es)\n", a);
    printf("A letra 'e' aparece no texto %d vez(es)\n", e);
    printf("A letra 'i' aparece no texto %d vez(es)\n", letra_i);
    printf("A letra 'o' aparece no texto %d vez(es)\n", o);
    printf("A letra 'u' aparece no texto %d vez(es)\n", u);

return 0;
}
