/*Exerc�cio 8 - Aula 10 - Ler 5 valores do usu�rio e apresentar o maior valor, o menor valor, a
soma e a m�dia dos valores.*/

#include<stdio.h>

int main () {

float valor, maior, menor, soma = 0;

    //Coletando primeiro valor e fazendo primeiras coisas//
        printf("Forne�a o 1 valor: \n");
        scanf("%f", &valor);

        soma = soma + valor;

        maior = valor;

        menor = valor;

    //Coletando pr�ximos valores e fazendo primeiros passos//
        for (int i = 2; i<6; i++){

            printf("Forne�a o %d valor: \n", i);
            scanf("%f", &valor);

            soma = soma + valor;

            if (valor > maior){

                maior = valor;
            }

            if (valor < menor) {

                menor = valor;
            }
        }

    //Mostrando na tela//
        printf ("\nMaior valor: %.2f\n", maior);
        printf ("Menor valor: %.2f\n", menor);
        printf("Soma: %.2f\n", soma);
        printf ("Media: %.2f", soma/5);


}
