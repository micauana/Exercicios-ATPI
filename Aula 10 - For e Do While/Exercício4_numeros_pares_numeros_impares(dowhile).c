/*Exerc�cio 4 - Aula 10 - Ler valores inteiros positivos do usu�rio at� que o n�mero 0 seja
fornecido. Ao final, apresentar a quantidade de n�meros pares e �mpares*/
#include<stdio.h>

int main () {

    int valor, par=0, impar=0;

        do{
            printf("Forne�a um valor inteiro e positivo: ");
            scanf("%d", &valor);

                if (valor == 0){
                    break;
                }

                if (valor < 0){
                    printf("\nValor Inv�lido");
                    break;


                }

                if (valor % 2 == 0){
                    par = par + 1;
                }

                if (valor % 2 != 0){
                    impar = impar + 1;
                }
        } while (valor > 0);

        //MOSTRANDO QUANTIDADES//

            printf("\n\nQuantidade de n�meros pares: %d\n", par);
            printf("\nQuantidade de n�meros �mpares: %d\n", impar);


return 0;
}
