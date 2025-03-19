/* Exercício 08 - Aula 12 - Faça um programa para apresentar a sequência de Fibonacci até o termo ‘n’
fornecido pelo usuário. Para tanto, temos que a sequência é definida pela seguinte
relação de recorrência: Fn = Fn-1 + Fn-2 ; com valores iniciais: F1 = 1 e F2 = 1.*/

#include<stdio.h>

int main () {

    int n, n1, n2, seq;

        //Declarando n1 e n2//
            n1 = 1;
            n2 = 1;

        //Coletando 'n'//
            printf("Forneça um valor 'n': \n");
            scanf("%d", &n);
            printf ("Sequência de Fibonacci até %d -> ", n);

        //Apresentando a sequencia até 'n'//

            for (int i = 1; i <= n; i++){

                if (i == 1){
                    printf("Termo 1 = 1; ");


                } else if (i == 2) {
                    printf("Termo 2 = 1; ");


                } else {

                    seq = n1 + n2;
                    n1 = n2;
                    n2 = seq;

                    printf("Termo %d = %d; ", i, seq);

                }

            }


}
