/* Exerc�cio 01 - Aula 11 - Fa�a um programa para ler um �ngulo em graus e
apresentar o seno e cosseno desse �ngulo*/

#include<stdio.h>
#include<math.h>

int main () {

double angulo, seno, cosseno, pi = 3.1415;

    //Coletando valor do angulo//
        printf("Forne�a o �ngulo em graus: \n");
        scanf("%lf", &angulo);

    //Como ele s� faz o seno e cosseno do �ngulo em radianos, faremos a transforma��o dele em radianos//
        angulo = angulo * pi / 180;

    //Calculando o seno e o cosseno//
        seno = sin(angulo);
        cosseno = cos(angulo);

    //Apresentando os valores//
        printf("Seno: %.2f\nCoseno: %.2f\n", seno, cosseno);

}
