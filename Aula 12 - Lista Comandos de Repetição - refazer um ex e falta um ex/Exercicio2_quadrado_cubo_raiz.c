/* Exerc�cio 2 - Aula 12 - Fa�a um programa que leia um conjunto n�o determinado de valores. A cada
n�mero lido, o programa dever� exibir o quadrado, o cubo e a raiz quadrada.
Finalize a entrada de dados quando o usu�rio digitar um valor negativo ou zero.*/

#include<stdio.h>
#include<math.h>

int main () {

    float numero;

    for (numero; numero; numero){

        printf("Forne�a um valor: \n");
        scanf("%f", &numero);

        if (numero <= 0){
            break;
        }

        printf("Quadrado = %.2f\n", numero*numero);
        printf("Cubo = %.2f\n", numero*numero*numero);
        printf("Raiz quadrada = %.2f\n", sqrt(numero));
        printf("\n\n");
    }
}
