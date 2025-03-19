/*Exerc�cio 01 - Trabalho em Dupla - Fa�a um programa para codificar uma frase contida em uma string. Para tanto, o c�digo deve
adicionar um inteiro k ao caractere, isto �, ao c�digo da tabela ASCII do caractere. Esse valor k �
fornecido pelo usu�rio, podendo assumir valores entre 1 e 10. Fa�a uma fun��o para codificar, a qual
recebe uma string e o valor k como par�metros. O programa tamb�m deve ter uma fun��o para
decodificar, a qual recebe uma string codificada e o valor k. Exemplo:
Digite uma palavra: abacate
Valor k: 5
Palavra codificada: fgfhfyj*/

#include<stdio.h>
#include<string.h>

int main () {

    char palavra[1000], palavra_nova[1000];
    int k;

        //Coletando a palavra//
            printf("Digite uma palavra: ");
            gets(palavra);

        //Coletando k
            printf("\nDigite o valor de 'k': ");
            scanf("%d", &k);
            getchar();

        //Adicionando o inteiro k
            for (int i = 0; palavra[i] != '\0'; i++){
                palavra_nova[i] = (int) palavra[i] + k;

                palavra[i] = palavra_nova[i];

            }
        //Exibindo a palavra codificada
            printf("\nPalavra codificada: %s", palavra);

            printf("\n\n=============\n");

        //Coletando a palavra codificada//
            printf("\nDigite uma palavra codificada: ");
            gets(palavra);

        //Coletando k
            printf("\nDigite o valor de 'k': ");
            scanf("%d", &k);

        //Adicionando o inteiro k
            for (int i = 0; palavra[i] != '\0'; i++){
                palavra_nova[i] = (int) palavra[i] - k;

                palavra[i] = palavra_nova[i];

            }
        //Exibindo a palavra codificada
            printf("\nPalavra decodificada: %s\n", palavra);

return 0;
}
