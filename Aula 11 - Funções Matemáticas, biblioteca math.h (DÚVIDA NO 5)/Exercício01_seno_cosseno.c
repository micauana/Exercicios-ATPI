/* Exercício 01 - Aula 11 - Faça um programa para ler um ângulo em graus e
apresentar o seno e cosseno desse ângulo*/

#include<stdio.h>
#include<math.h>

int main () {

double angulo, seno, cosseno, pi = 3.1415;

    //Coletando valor do angulo//
        printf("Forneça o ângulo em graus: \n");
        scanf("%lf", &angulo);

    //Como ele só faz o seno e cosseno do ângulo em radianos, faremos a transformação dele em radianos//
        angulo = angulo * pi / 180;

    //Calculando o seno e o cosseno//
        seno = sin(angulo);
        cosseno = cos(angulo);

    //Apresentando os valores//
        printf("Seno: %.2f\nCoseno: %.2f\n", seno, cosseno);

}
