/* Exercício 01 - Aula 14 - Ler o nome, idade e endereço de uma
pessoa. Em seguida, exibir na tela.*/

#include<stdio.h>

int main () {

    int idade;
    char nome[50], endereco[50];

    //Coletando o nome
        printf("Nome: ");
        fgets(nome, 50, stdin);

    //Coletando a idade
        printf("\nIdade: ");
        scanf("%d", &idade);
        fflush(stdin);

    //Coletando o endereço
        printf("\nEndereço: ");
        fgets(endereco, 50, stdin);

        printf("\n=============\n\n");

    //Exibindo valores
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n\n", idade);
        printf("Endereço: %s\n", endereco);

return 0;
}
