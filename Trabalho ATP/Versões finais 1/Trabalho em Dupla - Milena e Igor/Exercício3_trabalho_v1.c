/**Integrantes: Igor Pereira Marani e Milena Cauana Rejani Eduardo**/

/* Exercício 3 */

#include<stdio.h>
#include<string.h>

void definindo_substring(char destino[], char origem[], int a, int b){

int c = 0;
    for (int i = a; i < b + 1; i++){
        destino[c] = origem[i];
        c++;
    }
    destino[c] = '\0';

    //Exibindo
    printf("Substring: %s", destino);
}

int main () {

    char string[100], substring[100];
    int inicio, fim;

    //Coletando a string inicial
    printf("Digite uma palavra: ");
    gets(string);
    printf("Digite posicao inicial: ");
    scanf("%d", &inicio);
    printf("Digite posicao final: ");
    scanf("%d", &fim);

    //Utilizando a função
    definindo_substring(substring, string, inicio, fim);

    return 0;
}
