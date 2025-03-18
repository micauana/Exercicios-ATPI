//Exercício 5 - aula 5 - Valor bruto, liquido e desconto//

#include<stdio.h>
int main (){

float dias, valor_liquido, valor_bruto, desconto;

//Colecionando valores//
printf("Forneça a quantidade de dias: \n");
scanf("%f",&dias);

//Variáveis//
valor_bruto = dias*30;
desconto = 0.08*valor_bruto;
valor_liquido = valor_bruto-desconto;

//Mostrando os valores//
printf("Valor bruto: %f\n", valor_bruto);
printf("Desconto: %f\n", desconto);
printf("Valor Líquido: %f\n", valor_liquido);

return 0;
}
