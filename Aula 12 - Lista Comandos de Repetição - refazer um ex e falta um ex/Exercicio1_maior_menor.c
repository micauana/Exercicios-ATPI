/* Exercício 01 - Aula 12 - Elabore um programa que faça leitura de vários números inteiros até que se
digite um número negativo. Por fim, o programa tem que retornar o maior e o
menor número lido.*/

#include<stdio.h>

int main () {

int numero, par = 0, impar = 0;

    //Coletando números e dinindo quantidades de pares e impares//

        while (numero > 0) {

        printf("Forneça um número: \n");
        scanf("%d", &numero);

            if (numero < 0) {
                break;
            }

            if (numero % 2 == 0){
                par = par + 1;
            }else {
                impar = impar +1;
            }

        }

    //Apresentando as quantidades//
        printf("Quantidade de números pares = %d\n", par);
        printf("Quantidade de números ímpares = %d\n", impar);


}
