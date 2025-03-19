/*Ler cinco valores fornecidos pelo usuário e calcular a média dos valores.*/

#include<stdio.h>

int main (){

float valor, soma = 0;

    for (int i=1; i<6; i++){

        //Coletando os valores//
            printf("Forneça o %d valor: \n", i);
            scanf("%f", &valor);

        //Calculando a soma dos valores coletados//
            soma = soma + valor;

    }

        //Calculando a média e mostrando ela//
            printf("Soma = %.2f\n", soma);
            printf("Média = %.2f", soma/5);

}
