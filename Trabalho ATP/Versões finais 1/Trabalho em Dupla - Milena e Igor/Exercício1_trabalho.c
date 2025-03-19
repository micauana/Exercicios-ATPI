/**Integrantes: Igor Pereira Marani e Milena Cauana Rejani Eduardo**/

/*Exercício 01*/

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
