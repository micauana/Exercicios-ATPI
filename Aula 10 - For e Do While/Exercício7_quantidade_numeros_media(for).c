/* Exercício 7 - Aula 10 - Ler quantos valores serão fornecidos pelo usuário. Em seguida, fazer a
leitura desses valores. Por fim, apresentar a soma e a média.*/

#include<stdio.h>

int main (){

int quantidade, quantidade_inicial;
float numero , soma = 0;

    //Coletando quantidade//
        printf("Quantidade de números que serão fornecidos: ");
        scanf("%d", &quantidade);
        quantidade_inicial = quantidade;
        printf("\n\n");

    //Coletando números e fazendo sua soma//

        for (int i = quantidade; quantidade > 0; quantidade--) {

            printf("Forneça um número: \n");
            scanf("%f", &numero);

        soma = soma + numero;

        }

    //Fornecendo soma e media//
        printf("\nSoma = %.2f\n", soma);
        printf("Media = %.2f\n", soma/quantidade_inicial);

}
