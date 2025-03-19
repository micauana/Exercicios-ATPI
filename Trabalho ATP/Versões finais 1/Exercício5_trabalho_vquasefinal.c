/* Exercício 5 - Trabalho - Faça uma função para retornar a quantidade de vezes que uma string está contida em outra, ou seja,
quantas vezes a substring aparece em uma string. Exemplo:
Digite uma Palavra: 242544264542634524253454234
Palavra de Busca: 42
A Palavra de Busca ocorre 5 vez(es) */

#include<stdio.h>
#include<string.h>


int main ()
{
    char stringao[100], stringuinho[20], teste[20];
    int comparacao, tamanho, flag = 0, cont = 0;

    //Coletando a palavra e a busca
    printf("Digite uma palavra: ");
    gets(stringao);
    printf("\nPalavra de busca: ");
    gets(stringuinho);

    printf("\n===========\n\n");

    //Definindo tamanho da palavra que será encontrada
    tamanho = strlen(stringuinho);

    printf("\nStringuinho: %d", tamanho);

    //Verificando se ela se encontra
    for(int i = 0; stringao[i] != '\0'; i++)
    {
        if (stringuinho[0]==stringao[i])
        {
            int j = 0, k = 0, m = i;

            while(stringuinho[j]==stringao[m])
            {
                teste[k] = stringuinho[j];
                m++;
                j++;
                k++;
            }

            teste[k] = '\0';

            if(strcmp(stringuinho, teste) == 0)
            {
                flag = 1;
                cont = cont + 1;
            }

        }

    }

    printf("\nTeste: %s", teste);

    if(flag)
    {
        printf("\nPalavra de Busca ocorre %d vez(es)\n", cont);
    }
    else
    {
        printf("\nPalavra de Busca nao esta na String\n");
    }

    return 0;
}
