/* Exerc�cio 3 - Aula 14 - Ler um n�mero bin�rio e substituir o
caractere �0� por um �*� */

#include<stdio.h>

int main () {

    char binario[1000];
    int i = 0, nao_binario = 0, a = 0;

        //Lendo o n�mero bin�rio e validando


            printf("N�mero bin�rio: ");
            fgets(binario, 1000, stdin);


        //Substituindo o caractere
            while (binario[i] != '\0'){
                    if (binario[i] == '0'){
                        binario[i] = '*';
                    }
                    i++;
            }
            i = 0;
        printf("\n==============\n\n");

        //Exibindo o n�mero alterado
            printf("N�mero alterado: ");
            printf("%s ", binario);
            printf("\n\n");

return 0;
}
