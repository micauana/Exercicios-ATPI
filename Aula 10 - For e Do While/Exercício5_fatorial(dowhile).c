/*Ler um n�mero e apresentar o seu fatorial. Lembrando que:
n! = 1 x 2 x 3 x 4 x ... x n-1 x n
0! = 1
Exemplo: 5! = 1 x 2 x 3 x 4 x 5 =120*/

#include<stdio.h>

int main () {

int numero, fatorial = 1;


    //Coletando o n�mero//
        printf("Forne�a um n�mero: \n");
        scanf("%d", &numero);
        printf ("\nFatorial -> ");

    //Definindo o fatorial//

        do {

            fatorial = fatorial * numero;

            if (numero > 1){
                printf ("%d * ", numero);
            } else {
                printf ("%d = %d", numero, fatorial);
            }
            numero--;

        } while (numero > 0);

}
