/*Ler cinco valores fornecidos pelo usu�rio e calcular a m�dia dos valores.*/

#include<stdio.h>

int main (){

float valor, soma = 0;

    for (int i=1; i<6; i++){

        //Coletando os valores//
            printf("Forne�a o %d valor: \n", i);
            scanf("%f", &valor);

        //Calculando a soma dos valores coletados//
            soma = soma + valor;

    }

        //Calculando a m�dia e mostrando ela//
            printf("Soma = %.2f\n", soma);
            printf("M�dia = %.2f", soma/5);

}
