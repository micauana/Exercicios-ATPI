/* Exerc�cio 08 - Aula 12 - Fa�a um programa para apresentar a sequ�ncia de Fibonacci at� o termo �n�
fornecido pelo usu�rio. Para tanto, temos que a sequ�ncia � definida pela seguinte
rela��o de recorr�ncia: Fn = Fn-1 + Fn-2 ; com valores iniciais: F1 = 1 e F2 = 1.*/

#include<stdio.h>

int main () {

    int n, n1, n2, seq;

        //Declarando n1 e n2//
            n1 = 1;
            n2 = 1;

        //Coletando 'n'//
            printf("Forne�a um valor 'n': \n");
            scanf("%d", &n);
            printf ("Sequ�ncia de Fibonacci at� %d -> ", n);

        //Apresentando a sequencia at� 'n'//

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
