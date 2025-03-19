/* Exercício 1 - Aula 13 - Faça um programa ler 5 números e armazená-los em um vetor.
Em seguida, o seu programa deverá exibir os números lidos*/

#include<stdio.h>

int main () {

    float numero[5];

    for (int i=0; i<5; i++){

        printf("Forneça o %d número: \n", i+1);
        scanf("%f", &numero[i]);
    }

    //Exibindo na tela os valores
        printf("Valores armazenados: ");

        for (int a=0; a<5; a++){
            printf(" %.2f,", numero[a]);

        }


return 0;
}
