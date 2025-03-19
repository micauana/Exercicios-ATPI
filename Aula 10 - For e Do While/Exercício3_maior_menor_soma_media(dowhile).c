//Exercício 3 - Aula 10 - Ler 5 valores do usuário e apresentar o maior valor, o menor valor, a soma e a média dos valores//
#include<stdio.h>

int main () {

float valor, maior_valor, menor_valor, soma=0;
int cont=0;

    do{
        printf("Forneça o %d valor: ", cont + 1);
        scanf("%f", &valor);
        soma = soma + valor;

        if(cont == 0){
            maior_valor = valor;
            menor_valor = valor;
        }

        if (valor > maior_valor){
            maior_valor = valor;
        }
        if (valor < menor_valor){
            menor_valor = valor;
        }

        cont++;
    } while (cont < 5);

    //MOSTRANDO NA TELA OS VALORES//
        printf("\n\nMaior valor: %.2f\n", maior_valor);
        printf("\nMenor valor: %.2f\n", menor_valor);
        printf("\nSoma = %.2f\n", soma);
        printf("Média = %.2f", soma/5);

return 0;
}
