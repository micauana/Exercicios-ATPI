/* Exercício 2 - Trabalho em Dupla - Faça um programa para ler uma string e exibir a frequência de cada caractere da string. Não é
necessário fazer funções. Exemplo:
Digite uma Palavra: papagaio
p : 2 ocorrencia(s)
a : 3 ocorrencia(s)
g : 1 ocorrencia(s)
i : 1 ocorrencia(s)
o : 1 ocorrencia(s) */

#include<stdio.h>

int main () {

    char palavra[1000];
    int ocorrencias, a;

    //Coletando a palavra
        printf("Digite uma palavra: ");
        gets(palavra);
        printf("\n==========\n\n");

    //Contando as letras
        for (int i = 0; palavra[i] != '\0' ; i++){

            for (int a = i + 1; palavra[a] != '\0'; a++){
                int cont = 1;

                if (palavra[i] == palavra[a] && palavra[i] != '_'){
                    cont = cont + 1;
                    ocorrencias = cont;
                    palavra[a] = '_';
                }else{
                ocorrencias = cont;
                }
           }

           if(palavra[1] == '_'){

           }else{
           printf("%s\n", palavra);
           printf("%c : %d ocorrencia (s)\n", palavra[i], ocorrencias);
           }

        }

return 0;
}

//Erro na contagem de mais de 2 vezes ou quando tem dois caracteres um atrás do outro
