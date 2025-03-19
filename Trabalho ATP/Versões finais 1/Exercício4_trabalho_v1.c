/* Exercício 4 - Trabalho - Faça uma função para verificar e retornar se uma string está contida em outra, ou seja, se uma
string é substring de outra. Utilize retorno do valor 0 para falso e valor 1 para verdadeiro. Exemplo:
Digite uma Palavra: abacate
Palavra de Busca: cat
Palavra de Busca esta na String

Digite uma Palavra: papagaio
Palavra de Busca: gio
Palavra de Busca nao esta na String */

#include<stdio.h>
#include<string.h>

int main () {

char stringao[100], stringuinho[20], teste[20];
int comparacao, tamanho, flag = 0;


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
        for(int i = 0; stringao[i] != '\0'; i++){

                    if (stringuinho[0]==stringao[i]){

                        int j = 0, k = 0, m = i;

                        while(stringuinho[j]==stringao[m]){

                        teste[k] = stringuinho[j];
                        m++;
                        j++;
                        k++;
                    }
                    teste[k] = '\0';
                }

                if(strcmp(stringuinho, teste) == 0){
                        flag = 1;
                    break;
                }

    }

        printf("\nTeste: %s", teste);


        if(flag){
            printf("\nPalavra de Busca esta na String\n");
        } else {
            printf("\nPalavra de Busca nao esta na String\n");
        }

return 0;
}
