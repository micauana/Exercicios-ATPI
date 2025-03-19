/* Exerc�cio 7 - Aula 13 - Fa�a um programa para gerar N n�meros aleat�rios entre 0 e 5, os quais
representam os lan�amentos de um dado n�o viciado. Em seguida, o seu programa
dever� apresentar um relat�rio sobre a quantidade de ocorr�ncias de cada face do
dado.*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    int N, faces[1000], face1 = 0, face2 = 0, face3 = 0, face4 = 0, face5 = 0, face6 = 0;

    //Determinando quantos n�meros aleat�rios ir�o ser gerador
        printf("Quantos n�meros aleat�rios ser�o gerados? ");
        scanf("%d", &N);

    printf("\n=================\n\n");

    //Gerando os n�meros e fazendo os dados do relat�rio
        printf("N�meros que foram gerados: ");

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

    //Fxibindo o relat�rio:
        printf("RELAT�RIO:\n");
        printf("Face 1: %d vezes;\n", face1);
        printf("Face 2: %d vezes;\n", face2);
        printf("Face 3: %d vezes;\n", face3);
        printf("Face 4: %d vezes;\n", face4);
        printf("Face 5: %d vezes;\n", face5);
        printf("Face 6: %d vezes;\n", face6);


return 0;
}
