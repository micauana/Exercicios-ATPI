/* Exerc�cio 02 - Aula 14 - Fa�a um programa que leia nome, idade, endere�o e telefone de uma pessoa e,
seguida, imprima essas informa��es em uma �nica linha. */

#include<stdio.h>

int main () {

    char nome[1000], endereco[1000], telefone[1000];
    int idade;

    printf("Forne�a seu nome, idade, endere�o e telefone :\n");
    gets(nome);
    scanf("%d", &idade);
    fflush(stdin);
    gets(endereco);
    gets(telefone);

    printf("\n=============\n\n");

    printf("Nome: %s, Idade: %d, Endere�o: %s, Telefone: %s.", nome, idade, endereco, telefone);

return 0;
}
