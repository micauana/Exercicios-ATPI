/* Exercício 09 - Aula 12 - Faça um programa para ler um número inteiro positivo N e, em seguida,
imprimir N linhas do chamado Triângulo de Floyd. Por exemplo, para N=6 temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include<stdio.h>

int main () {

    int n; //Número de linhas
    int cont=1;

    //Coletando 'n'//
        printf("Forneça um número inteiro positivo: \n");
        scanf("%d", &n);

    //Fazendo o triângulo//

        for (int i = 1; i<=n; i++){ //Número que define as linhas
                for (int j=1; j<=i; j++, cont++){
                printf("%d ", cont);
        }

            printf("\n", i);
        }



}
