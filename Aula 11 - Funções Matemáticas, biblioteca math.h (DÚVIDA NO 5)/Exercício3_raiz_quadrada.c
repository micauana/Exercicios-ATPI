/* Exercício 3 - Aula 11 - Faça um programa para ler um número e apresentar a raiz
quadrada do número*/

#include<stdio.h>
#include<math.h>

int main () {

double numero, raiz;

    //Coletando o número//
        printf("Forneça um número: \n");
        scanf("%lf", &numero);

    //Calculando a raiz//
        raiz = sqrt(numero);

    //Apresentando a raiz//
        printf("\nRaiz quadrada de %.0f: %.2f\n", numero, raiz);


}
