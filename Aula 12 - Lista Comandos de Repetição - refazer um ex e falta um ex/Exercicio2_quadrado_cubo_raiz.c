/* Exercício 2 - Aula 12 - Faça um programa que leia um conjunto não determinado de valores. A cada
número lido, o programa deverá exibir o quadrado, o cubo e a raiz quadrada.
Finalize a entrada de dados quando o usuário digitar um valor negativo ou zero.*/

#include<stdio.h>
#include<math.h>

int main () {

    float numero;

    for (numero; numero; numero){

        printf("Forneça um valor: \n");
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
