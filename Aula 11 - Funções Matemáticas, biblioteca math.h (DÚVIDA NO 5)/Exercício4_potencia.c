/* Exerc�cio 4 - Aula 11 - Fa�a um programa para ler a base e o expoente. Em
seguida, dever� apresentar o resultado da potencia��o.
Para tanto, use a fun��o pow, conforme segue:
� double pow (double base, double exponent);*/

#include<stdio.h>
#include<math.h>

int main () {

    float base, expoente, potencia;

    //Coletando base e expoente//
        printf("Forne�a a base e depois o expoente: \n");
        scanf("%f", &base);
        scanf("%f", &expoente);

    //Calculando a potencia//
        potencia = pow (base, expoente);


    //Apresentando o resultado//
        printf("\n%.2f ^ %.2f = %.2f", base, expoente, potencia);

}
