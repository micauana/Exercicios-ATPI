/* Exerc�cio 5 - Aula 11 - Fa�a um programa para ler os valores de a, b e c de uma equa��o do
2o grau. Em seguida, ele dever� calcular as ra�zes da equa��o.
Lembrando que:*/

#include<stdio.h>
#include<math.h>

int main () {

float a, b, c, delta, x1, x2;

    //Coletando a, b e c e definindo se � uma equa��o do segundo grau//
        printf("Forne�a o 'a', 'b' e 'c' de uma equa��o do segundo grau: \n");
        scanf ("%f", &a);
        scanf ("%f", &b);
        scanf ("%f", &c);

        if (a==00){
            printf ("N�o � equa��o do segundo grau! (a = 0)");

        } else {

            //Definindo a equea��o//

            printf("\n%.0fx^2+%.0fx+%.0f=0\n", a, b, c);

            //Calculando e definindo o delta//
        delta = (b*b) - (4*a*c);

            printf("\nDelta = %.2f\n", delta);

        if (delta < 0){
            printf("\n\nDELTA < 0: N�o existe raiz real\n");
        }else if (delta == 0){
            x1 = -b + sqrt(delta) / 2*a;

            printf("DELTA = 0: Raiz �nica -> x=%.2f\n", x1);
        } else {
            x1 = -b + (sqrt(delta)) / 2*a;
            x2 = -b - (sqrt(delta)) / 2*a;

            printf("DELTA > 0: Duas ra�zes reais -> x1=%.2f e x2=%.2f\n", x1, x2);
        }

}

}
