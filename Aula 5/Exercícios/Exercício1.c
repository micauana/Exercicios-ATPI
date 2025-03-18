//Exercício 1 - aula 5 - Quantidade de cupons//

#include<stdio.h>
int main (){
    float valor;
    int cupom;

//Recebendo o valor na compra//
printf("Forneça o valor total da compra: ");
scanf("%f", &valor);

//Cupom por valor//
cupom = valor/20;
printf("Total de cupons: %d", cupom);

return 0;
}
