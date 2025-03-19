/* Exercício 2 - Aula 11 - Faça um programa para ler um número e apresentar o
resultado das funções: ceil, floor, round e trunc*/

#include<stdio.h>
#include<math.h>

int main () {

    double numero, pra_cima, pra_baixo, mais_proximo, sem_fracao;

    //Coletando o número//
        printf ("Forneça um número: \n");
        scanf("%lf", &numero);

    //Fazendo os arredondamentos//
        pra_cima = ceil(numero);
        pra_baixo = floor(numero);
        mais_proximo = round(numero);
        sem_fracao = trunc(numero);

        printf("Ceil (pra cima) = %.2f\nFloor (pra baixo) = %.2f\nFloor (mais próximo) = %.2f\nTrunc (sem a parte fracionária) = %.2f\n", pra_cima, pra_baixo, mais_proximo, sem_fracao);



}
