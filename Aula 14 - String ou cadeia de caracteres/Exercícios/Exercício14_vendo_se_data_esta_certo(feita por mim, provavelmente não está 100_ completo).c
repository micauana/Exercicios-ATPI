/* Exerc�cio 14 - Aula 14 - Fa�a um programa para ler uma string com uma data no formato
�DD/MM/AAAA�. Ap�s a leitura, o programa deve verificar se a data fornecida
pelo usu�rio est� no formato exigido.*/

#include<stdio.h>

int main () {

    char data[20], invalido = 0;

    //Coletando a data
    printf("Forne�a uma data no formato DD/MM/AAAA (incluindo as barras de separa��o '/', se o dia ou o m�s for menor que 10, utilizar 0 zero na frente, Exemplo: 01/02/1984: ");
    gets(data);

    //Verificando se a data est� no formato exigido

    printf("\n===========\n\n");

        if (data[2] != '/' && data[5] != '/'){
            invalido = 1;
            printf ("'/' n�o est� no formato certo ou n�o est� no lugar certo.\n");
        } else if (data[0] > '3' || data[0] < '0'){
            invalido = 1;
            printf("Dia n�o est� correto.\n");
        } else if ((data[3] <  '0' || data[3] > '1') || (data[3] == '1' && data[4] > '2' )){
            invalido = 1;
            printf("M�s n�o est� correto.\n");
        }

        printf("\n==========\n\n");

        if (invalido == 1){
            printf("Data est� inv�lida.\n\n");
        }else{
            printf("Data v�lida.\n\n");
        }


return 0;
}
