/* Exerc�cio 3 - Aula 11 - Fa�a um programa para ler um n�mero e apresentar a raiz
quadrada do n�mero*/

#include<stdio.h>
#include<math.h>

int main () {

double numero, raiz;

    //Coletando o n�mero//
        printf("Forne�a um n�mero: \n");
        scanf("%lf", &numero);

    //Calculando a raiz//
        raiz = sqrt(numero);

    //Apresentando a raiz//
        printf("\nRaiz quadrada de %.0f: %.2f\n", numero, raiz);


}
