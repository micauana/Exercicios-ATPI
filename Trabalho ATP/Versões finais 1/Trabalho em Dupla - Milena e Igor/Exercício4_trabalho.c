/**Integrantes: Igor Pereira Marani e Milena Cauana Rejani Eduardo**/

/* Exercício 4*/

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

    printf("\n===========\n");

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



        if(flag){
            printf("\nPalavra de Busca esta na String\n");
        } else {
            printf("\nPalavra de Busca nao esta na String\n");
        }

return 0;
}
