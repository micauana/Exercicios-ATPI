/*5) Faça uma função para retornar a quantidade de vezes
que uma string está contida em outra, ou seja,
quantas vezes a substring aparece em uma string. Exemplo:
Digite uma Palavra: 242544264542634524253454234
Palavra de Busca: 42
A Palavra de Busca ocorre 5 vez(es)
Digite uma Palavra: papagaio
Palavra de Busca: pa
A Palavra de Busca ocorre 2 vez(es)
Digite uma Palavra: abacate
Palavra de Busca: pa
A Palavra de Busca ocorre 0 vez(es)
Digite uma Palavra: hoje vou programar muito
Palavra de Busca: programa
A Palavra de Busca ocorre 1 vez(es)*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char stringao[100]; stringuinho[20], teste[20];
int cont=0; flag=0;
    printf("Digite uma palavra: ");
    gets(stringao);
    printf("Palavra de busca: ");
    gets(stringuinho);
    for (int i=0; stringao[i]!='\0'; i++){
        for(int j=0; stringuinho[j]!='\0'; j++){
            if (stringuinho[j] == stringao[i]){
                teste[j] = stringao[i];
                break;
            }

        }
    }
}

