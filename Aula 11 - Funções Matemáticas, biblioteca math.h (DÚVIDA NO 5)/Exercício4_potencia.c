/* Exercício 4 - Aula 11 - Faça um programa para ler a base e o expoente. Em
seguida, deverá apresentar o resultado da potenciação.
Para tanto, use a função pow, conforme segue:
– double pow (double base, double exponent);*/

#include<stdio.h>
#include<math.h>

int main () {

    float base, expoente, potencia;

    //Coletando base e expoente//
        printf("Forneça a base e depois o expoente: \n");
        scanf("%f", &base);
        scanf("%f", &expoente);

    //Calculando a potencia//
        potencia = pow (base, expoente);


    //Apresentando o resultado//
        printf("\n%.2f ^ %.2f = %.2f", base, expoente, potencia);

}
