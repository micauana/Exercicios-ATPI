/* Exerc�cio 01 - Aula 12 - Elabore um programa que fa�a leitura de v�rios n�meros inteiros at� que se
digite um n�mero negativo. Por fim, o programa tem que retornar o maior e o
menor n�mero lido.*/

#include<stdio.h>

int main () {

int numero, par = 0, impar = 0;

    //Coletando n�meros e dinindo quantidades de pares e impares//

        while (numero > 0) {

        printf("Forne�a um n�mero: \n");
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
        printf("Quantidade de n�meros pares = %d\n", par);
        printf("Quantidade de n�meros �mpares = %d\n", impar);


}
