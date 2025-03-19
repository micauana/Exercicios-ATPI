/* Exercício 08 - Aula 14 - Faça um programa que receba uma palavra e a imprima de trás-para-frente. */

 #include<stdio.h>

 int main () {

    char palavra[1000];
    int i = 0;

    printf("Digite uma palavra: ");
    gets(palavra);

    while (palavra[i] != '\0'){
            i++;
    }
    i--;

    printf("\nTamanho da string: %d\n", i);

 printf("\n=============\n\n");
 printf("Palavra de trás para frente: ");

    for (int a = i; a >= 0; a--){
        printf("%c", palavra[a]);
    }

    printf("\n\n");

 return 0;
 }
