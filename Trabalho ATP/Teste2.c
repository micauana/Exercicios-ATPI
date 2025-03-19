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
    int ocorrencias, i = 0, a = i + 1;

    //Coletando a palavra
        printf("Digite uma palavra: ");
        gets(palavra);
        printf("\n==========\n\n");

    //Contando as letras
        while(palavra[i] != '/0'){

            while (palavra[a] != '\0'){
                int cont = 1;

                if (palavra[i] == palavra[a] && palavra[i] != '_'){
                    cont = cont + 1;
                    palavra[a] = '_';
                    ocorrencias = cont;
                }
                a++;
           }

           printf("%s", palavra);
           printf("%c : %d ocorrencia (s)\n", palavra[a], ocorrencias);

             i++;
        }

return 0;
}
