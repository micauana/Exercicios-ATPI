/* Exerc�cio 2 - Aula 11 - Fa�a um programa para ler um n�mero e apresentar o
resultado das fun��es: ceil, floor, round e trunc*/

#include<stdio.h>
#include<math.h>

int main () {

    double numero, pra_cima, pra_baixo, mais_proximo, sem_fracao;

    //Coletando o n�mero//
        printf ("Forne�a um n�mero: \n");
        scanf("%lf", &numero);

    //Fazendo os arredondamentos//
        pra_cima = ceil(numero);
        pra_baixo = floor(numero);
        mais_proximo = round(numero);
        sem_fracao = trunc(numero);

        printf("Ceil (pra cima) = %.2f\nFloor (pra baixo) = %.2f\nFloor (mais pr�ximo) = %.2f\nTrunc (sem a parte fracion�ria) = %.2f\n", pra_cima, pra_baixo, mais_proximo, sem_fracao);



}
