/* Exercício 11 - Aula 10 - Apresentar a tabuada dos número de 0 a 10. Para tanto, utilize dois
comandos for aninhados (um comando for dentro de outro comando for)*/

#include<stdio.h>

int main (){

    int numero, multiplicado;

    for (numero = 0; numero < 11; numero ++){

            printf("TABUADA DO %d: \n", numero);

        for (multiplicado = 0; multiplicado < 11; multiplicado ++){

            printf("%d * %d = %d\n", numero, multiplicado, numero * multiplicado);
        }
        printf("\n\n");
    }

}
