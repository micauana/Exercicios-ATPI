/*Exercício 4 - Aula 10 - Ler valores inteiros positivos do usuário até que o número 0 seja
fornecido. Ao final, apresentar a quantidade de números pares e ímpares*/
#include<stdio.h>

int main () {

    int valor, par=0, impar=0;

        do{
            printf("Forneça um valor inteiro e positivo: ");
            scanf("%d", &valor);

                if (valor == 0){
                    break;
                }

                if (valor < 0){
                    printf("\nValor Inválido");
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

            printf("\n\nQuantidade de números pares: %d\n", par);
            printf("\nQuantidade de números ímpares: %d\n", impar);


return 0;
}
