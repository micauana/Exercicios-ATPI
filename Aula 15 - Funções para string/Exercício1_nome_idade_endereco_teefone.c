/* Exerc�cio 01 - Aula 15 - Fa�a um programa que leia nome, idade, endere�o e telefone de uma pessoa e,
seguida, imprima essas informa��es em uma �nica linha. Utilizar o getchar ao
inv�s do fflush.*/

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
    printf("\nEndere�o: ");
    gets(endereco);
    printf("\nTelefone: ");
    gets(telefone);

    printf("\n===========\n\n");

    printf("Nome: %s, Idade: %d, Endere�o: %s, Telefone: %s.", nome, idade, endereco, telefone);






return 0;
}
