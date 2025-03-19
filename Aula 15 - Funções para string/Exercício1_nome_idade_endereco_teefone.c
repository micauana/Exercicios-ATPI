/* Exercício 01 - Aula 15 - Faça um programa que leia nome, idade, endereço e telefone de uma pessoa e,
seguida, imprima essas informações em uma única linha. Utilizar o getchar ao
invés do fflush.*/

#include<stdio.h>
#include<string.h>

int main ()  {

    char nome[100], endereco[100], telefone[100];
    int idade;

    printf("Nome: ");
    gets(nome);
    printf("\nIdade: ");
    scanf("%d", &idade);
    getchar ();
    printf("\nEndereço: ");
    gets(endereco);
    printf("\nTelefone: ");
    gets(telefone);

    printf("\n===========\n\n");

    printf("Nome: %s, Idade: %d, Endereço: %s, Telefone: %s.", nome, idade, endereco, telefone);






return 0;
}
