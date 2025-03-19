/* Exercício 5 - Aula 11 - Faça um programa para ler os valores de a, b e c de uma equação do
2o grau. Em seguida, ele deverá calcular as raízes da equação.
Lembrando que:*/

#include<stdio.h>
#include<math.h>

int main () {

float a, b, c, delta, x1, x2;

    //Coletando a, b e c e definindo se é uma equação do segundo grau//
        printf("Forneça o 'a', 'b' e 'c' de uma equação do segundo grau: \n");
        scanf ("%f", &a);
        scanf ("%f", &b);
        scanf ("%f", &c);

        if (a==00){
            printf ("Não é equação do segundo grau! (a = 0)");

        } else {

            //Definindo a equeação//

            printf("\n%.0fx^2+%.0fx+%.0f=0\n", a, b, c);

            //Calculando e definindo o delta//
        delta = (b*b) - (4*a*c);

            printf("\nDelta = %.2f\n", delta);

        if (delta < 0){
            printf("\n\nDELTA < 0: Não existe raiz real\n");
        }else if (delta == 0){
            x1 = -b + sqrt(delta) / 2*a;

            printf("DELTA = 0: Raiz única -> x=%.2f\n", x1);
        } else {
            x1 = -b + (sqrt(delta)) / 2*a;
            x2 = -b - (sqrt(delta)) / 2*a;

            printf("DELTA > 0: Duas raízes reais -> x1=%.2f e x2=%.2f\n", x1, x2);
        }

}

}
