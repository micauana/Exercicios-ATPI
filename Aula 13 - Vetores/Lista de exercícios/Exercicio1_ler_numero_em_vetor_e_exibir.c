/* Exerc�cio 1 - Aula 13 - Fa�a um programa ler 5 n�meros e armazen�-los em um vetor.
Em seguida, o seu programa dever� exibir os n�meros lidos*/

#include<stdio.h>

int main () {

    float numero[5];

    for (int i=0; i<5; i++){

        printf("Forne�a o %d n�mero: \n", i+1);
        scanf("%f", &numero[i]);
    }

    //Exibindo na tela os valores
        printf("Valores armazenados: ");

        for (int a=0; a<5; a++){
            printf(" %.2f,", numero[a]);

        }


return 0;
}
