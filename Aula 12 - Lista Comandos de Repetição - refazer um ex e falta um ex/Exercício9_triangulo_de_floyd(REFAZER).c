/* Exerc�cio 09 - Aula 12 - Fa�a um programa para ler um n�mero inteiro positivo N e, em seguida,
imprimir N linhas do chamado Tri�ngulo de Floyd. Por exemplo, para N=6 temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include<stdio.h>

int main () {

    int n; //N�mero de linhas
    int cont=1;

    //Coletando 'n'//
        printf("Forne�a um n�mero inteiro positivo: \n");
        scanf("%d", &n);

    //Fazendo o tri�ngulo//

        for (int i = 1; i<=n; i++){ //N�mero que define as linhas
                for (int j=1; j<=i; j++, cont++){
                printf("%d ", cont);
        }

            printf("\n", i);
        }



}
