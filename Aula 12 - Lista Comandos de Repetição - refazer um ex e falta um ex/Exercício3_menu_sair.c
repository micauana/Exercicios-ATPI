/* Exercício 03 - Aula 12 - Faça um programa que apresente um menu de opções de operações para serem realizadas entre dois números fornecidos pelo usuário,
conforme abaixo. O programa é finalizado quando o usuário digitar a Opção 5.
MENU
1 - Adição
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Sair*/

#include<stdio.h>

int main () {

float numero1, numero2, opcao;

    //Coletando dois números//
        printf("Forneça o primeiro número: \n");
        scanf("%f", &numero1);
        printf("Forneça o segundo número: \n");
        scanf("%f", &numero2);

    //Apresentando menu//

        do{

            printf ("\n\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n\n");
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
                    printf("\nOpção não válida");
                }

            }while (opcao != 5);

}
