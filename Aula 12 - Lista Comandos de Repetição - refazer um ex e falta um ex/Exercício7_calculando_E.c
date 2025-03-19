/* Exercício 07 - Aula 12 - Faça um programa para ler um valor inteiro e positivo N. Em seguida, deve-se calcular e exibir o valor de E,
que é calculado conforme a seguinte equação:
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/

#include<stdio.h>

int main () {

    int N, fat = 1;
    float E = 0;

    //Coletando N//
        printf("Forneça um valor inteiro e positivo: \n");
        scanf("%d", &N);
        printf("E = ");

    //Definindo E//

        for (int i = 1; i<=N; i++){ //Definindo o número que será fatorado embaixo//

                fat = 1; //Reiniciando o fatorial

                for (int a = 1; a<=i; a++){ //Efetuando a fatoração

                    fat = fat * a;

                }


                if (i < N){
                    printf(" 1/%d! +", i);

                } else {
                    printf(" 1/%d! =", i);
                }
                E = E + 1.0/fat;

        }

         printf(" %f", E);
}
