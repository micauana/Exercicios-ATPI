/*Exercício 9 - Aula 10 - Ler valores inteiros positivos do usuário até que o número 0 seja
fornecido. Ao final, apresentar a quantidade de números pares e ímpares. */

#include<stdio.h>

int main () {

int valor, par = 0, impar = 0;

    for (valor; valor =! 0; ){

        printf("Forneça um valor: \n");
        scanf("%d", &valor);

        if (valor == 0){
            break;
        }

        if (valor % 2 == 0){
            par = par + 1;
        } else {
            impar = impar +1;
        }
    }

    printf("Quantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", impar);


}
