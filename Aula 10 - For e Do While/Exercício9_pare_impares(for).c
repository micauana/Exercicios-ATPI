/*Exerc�cio 9 - Aula 10 - Ler valores inteiros positivos do usu�rio at� que o n�mero 0 seja
fornecido. Ao final, apresentar a quantidade de n�meros pares e �mpares. */

#include<stdio.h>

int main () {

int valor, par = 0, impar = 0;

    for (valor; valor =! 0; ){

        printf("Forne�a um valor: \n");
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

    printf("Quantidade de n�meros pares: %d\n", par);
    printf("Quantidade de n�meros �mpares: %d\n", impar);


}
