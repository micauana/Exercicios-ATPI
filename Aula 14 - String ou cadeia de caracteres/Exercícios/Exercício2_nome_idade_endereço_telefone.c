/* Exercício 02 - Aula 14 - Faça um programa que leia nome, idade, endereço e telefone de uma pessoa e,
seguida, imprima essas informações em uma única linha. */

#include<stdio.h>

int main () {

    char nome[1000], endereco[1000], telefone[1000];
    int idade;

    printf("Forneça seu nome, idade, endereço e telefone :\n");
    gets(nome);
    scanf("%d", &idade);
    fflush(stdin);
    gets(endereco);
    gets(telefone);

    printf("\n=============\n\n");

    printf("Nome: %s, Idade: %d, Endereço: %s, Telefone: %s.", nome, idade, endereco, telefone);

return 0;
}
