/* Exerc�cio 7 - Aula 10 - Ler quantos valores ser�o fornecidos pelo usu�rio. Em seguida, fazer a
leitura desses valores. Por fim, apresentar a soma e a m�dia.*/

#include<stdio.h>

int main (){

int quantidade, quantidade_inicial;
float numero , soma = 0;

    //Coletando quantidade//
        printf("Quantidade de n�meros que ser�o fornecidos: ");
        scanf("%d", &quantidade);
        quantidade_inicial = quantidade;
        printf("\n\n");

    //Coletando n�meros e fazendo sua soma//

        for (int i = quantidade; quantidade > 0; quantidade--) {

            printf("Forne�a um n�mero: \n");
            scanf("%f", &numero);

        soma = soma + numero;

        }

    //Fornecendo soma e media//
        printf("\nSoma = %.2f\n", soma);
        printf("Media = %.2f\n", soma/quantidade_inicial);

}
