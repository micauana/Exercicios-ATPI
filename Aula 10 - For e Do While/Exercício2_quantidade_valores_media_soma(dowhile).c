//Exerc�cio 2 - Aula 10 - Ler quantos valores ser�o fornecidos pelo usu�rio. Em seguida, fazer a leitura desses valores. Por fim, apresentar a soma e a m�dia.//
#include<stdio.h>

int main () {

    float valor, soma=0;
    int quantidade, cont=0;

        //COLETANDO QUANTIDADE//

            printf("Forne�a a quantidade de valores que ser�o fornecidos: ");
            scanf("%d", &quantidade);
            printf("\n\n");

        //COLETANDO VALORES E DEFININDO SOMA//

            do{
                printf("Forne�a o %d valor: \n", cont+1);
                scanf("%f", &valor);
                soma = soma + valor;
                cont++;
            }while (cont < quantidade);

        //MOSTRANDO SOMA E M�DIA//

            printf("\nSoma = %.2f\n", soma);
            printf("Media = %.2f\n", soma/quantidade);


return 0;
}
