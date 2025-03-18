//Exercício 7 - aula 5 - mudar ordem dos números//
#include<stdio.h>

int main(){
    int num, d1, d2, d3;

    //Coletando dados//
    printf("Forneça um número com três digitos: \n");
    scanf("%d", &num);

    //Definindo d1, d2 e d3//
    d1 = num/100;
    d2 = num % 100/10;
    d3 = num % 100 % 10;

    //Mostrando número em outra ordem//
    printf("Novo número: %d%d%d", d3, d2, d1);

return 0;
}
