//Exercício 2 - Aula 10 - Ler quantos valores serão fornecidos pelo usuário. Em seguida, fazer a leitura desses valores. Por fim, apresentar a soma e a média.//
#include<stdio.h>

int main () {

    float valor, soma=0;
    int quantidade, cont=0;

        //COLETANDO QUANTIDADE//

            printf("Forneça a quantidade de valores que serão fornecidos: ");
            scanf("%d", &quantidade);
            printf("\n\n");

        //COLETANDO VALORES E DEFININDO SOMA//

            do{
                printf("Forneça o %d valor: \n", cont+1);
                scanf("%f", &valor);
                soma = soma + valor;
                cont++;
            }while (cont < quantidade);

        //MOSTRANDO SOMA E MÉDIA//

            printf("\nSoma = %.2f\n", soma);
            printf("Media = %.2f\n", soma/quantidade);


return 0;
}
