//Exerc�cio 1 - Aula 10 - Calculando m�dia de cinco valores fornecidos pelo usu�rio//
#include<stdio.h>

int main() {

    //COLETANDO VALORES E EFETUANDO SUA SOMA//

    float valor, soma=0;
    int cont=0;

    do{
        printf("Forne�a %d� valor: \n", cont+1);
        scanf("%f", &valor);
        soma = soma + valor;
        cont++;
}while(cont<5);

    //MOSTRANDO SOMA E MEDIA//

        printf("\n\nSoma = %.2f", soma);
        printf("\n\nMedia = %.2f\n", soma/5);


return 0;
}
