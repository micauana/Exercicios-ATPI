/* Exercício 7 - Aula 13 - Faça um programa para gerar N números aleatórios entre 0 e 5, os quais
representam os lançamentos de um dado não viciado. Em seguida, o seu programa
deverá apresentar um relatório sobre a quantidade de ocorrências de cada face do
dado.*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    int N, faces[1000], face1 = 0, face2 = 0, face3 = 0, face4 = 0, face5 = 0, face6 = 0;

    //Determinando quantos números aleatórios irão ser gerador
        printf("Quantos números aleatórios serão gerados? ");
        scanf("%d", &N);

    printf("\n=================\n\n");

    //Gerando os números e fazendo os dados do relatório
        printf("Números que foram gerados: ");

        for  (int i = 0; i < N; i++){
            faces[i] = rand () % 5;
            printf(" %d", faces[i]);

            switch (faces[i]){

                case 0:
                    face1 = face1 + 1;
                    break;

                case 1:
                    face2 = face2 + 1;
                    break;

                case 2:
                    face3 = face3 + 1;
                    break;

                case 3:
                    face4 = face4 + 1;
                    break;

                case 4:
                    face5 = face5 + 1;
                    break;

                case 5:
                    face6 = face6 + 1;
                    break;

            }
        }

        printf("\n\n=================\n\n");

    //Fxibindo o relatório:
        printf("RELATÓRIO:\n");
        printf("Face 1: %d vezes;\n", face1);
        printf("Face 2: %d vezes;\n", face2);
        printf("Face 3: %d vezes;\n", face3);
        printf("Face 4: %d vezes;\n", face4);
        printf("Face 5: %d vezes;\n", face5);
        printf("Face 6: %d vezes;\n", face6);


return 0;
}
