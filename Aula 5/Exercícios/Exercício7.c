//Exerc�cio 7 - aula 5 - mudar ordem dos n�meros//
#include<stdio.h>

int main(){
    int num, d1, d2, d3;

    //Coletando dados//
    printf("Forne�a um n�mero com tr�s digitos: \n");
    scanf("%d", &num);

    //Definindo d1, d2 e d3//
    d1 = num/100;
    d2 = num % 100/10;
    d3 = num % 100 % 10;

    //Mostrando n�mero em outra ordem//
    printf("Novo n�mero: %d%d%d", d3, d2, d1);

return 0;
}
