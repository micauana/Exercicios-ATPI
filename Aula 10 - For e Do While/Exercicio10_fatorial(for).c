/* Exerc�cio 10 - Aula 10 - Ler um n�mero e apresentar o seu fatorial.*/

#include<stdio.h>

int main (){

    int numero, fatorial = 1;

    //Coletando o numero//
        printf("Forne�a um n�mero: \n");
        scanf("%d", &numero);
        printf("\nFatorial ->");

    //Calculando fatorial//
        for (numero; numero>0; numero--){

             fatorial = fatorial * numero;

             if (numero > 1){
                printf(" %d *", numero);
             } else {
                printf(" %d = ", numero);
             }
        }

        printf("%d", fatorial);

}
