/* Exercício 14 - Aula 14 - Faça um programa para ler uma string com uma data no formato
“DD/MM/AAAA”. Após a leitura, o programa deve verificar se a data fornecida
pelo usuário está no formato exigido.*/

#include<stdio.h>

int main () {

    char data[20], invalido = 0;

    //Coletando a data
    printf("Forneça uma data no formato DD/MM/AAAA (incluindo as barras de separação '/', se o dia ou o mês for menor que 10, utilizar 0 zero na frente, Exemplo: 01/02/1984: ");
    gets(data);

    //Verificando se a data está no formato exigido

    printf("\n===========\n\n");

        if (data[2] != '/' && data[5] != '/'){
            invalido = 1;
            printf ("'/' não está no formato certo ou não está no lugar certo.\n");
        } else if (data[0] > '3' || data[0] < '0'){
            invalido = 1;
            printf("Dia não está correto.\n");
        } else if ((data[3] <  '0' || data[3] > '1') || (data[3] == '1' && data[4] > '2' )){
            invalido = 1;
            printf("Mês não está correto.\n");
        }

        printf("\n==========\n\n");

        if (invalido == 1){
            printf("Data está inválida.\n\n");
        }else{
            printf("Data válida.\n\n");
        }


return 0;
}
