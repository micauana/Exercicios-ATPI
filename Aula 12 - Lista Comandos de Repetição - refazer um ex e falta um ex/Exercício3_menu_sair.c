/* Exerc�cio 03 - Aula 12 - Fa�a um programa que apresente um menu de op��es de opera��es para serem realizadas entre dois n�meros fornecidos pelo usu�rio,
conforme abaixo. O programa � finalizado quando o usu�rio digitar a Op��o 5.
MENU
1 - Adi��o
2 - Subtra��o
3 - Multiplica��o
4 - Divis�o
5 - Sair*/

#include<stdio.h>

int main () {

float numero1, numero2, opcao;

    //Coletando dois n�meros//
        printf("Forne�a o primeiro n�mero: \n");
        scanf("%f", &numero1);
        printf("Forne�a o segundo n�mero: \n");
        scanf("%f", &numero2);

    //Apresentando menu//

        do{

            printf ("\n\n1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n5 - Sair\n\n");
            scanf("%f", &opcao);

                if (opcao == 1){

                    printf("\n%.2f + %.2f = %.2f", numero1, numero2, numero1 + numero2);

                } else if (opcao == 2){

                    printf("\n%.2f - %.2f = %.2f", numero1, numero2, numero1 - numero2);

                } else if (opcao == 3){

                    printf("%.2f * %.2f = %.2f", numero1, numero2, numero1 * numero2);

                } else if (opcao == 4){
                    printf("\n%.2f / %.2f = %.2f", numero1, numero2, numero1 / numero2);

                } else if (opcao == 5){
                    break;

                } else {
                    printf("\nOp��o n�o v�lida");
                }

            }while (opcao != 5);

}
