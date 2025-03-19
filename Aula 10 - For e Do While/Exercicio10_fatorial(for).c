/* Exercício 10 - Aula 10 - Ler um número e apresentar o seu fatorial.*/

#include<stdio.h>

int main (){

    int numero, fatorial = 1;

    //Coletando o numero//
        printf("Forneça um número: \n");
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
