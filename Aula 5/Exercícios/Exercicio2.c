//Exerc�cio 2 - aula 5 - Custo de viagem de acordo com gasolina//

#include<stdio.h>
int main () {
    float consumo, preco, distancia, custo;

//Coletando valores//
printf("Forne�a o consumo do carro (km\L): \n");
scanf("%f", &consumo);

printf("Forne�a o pre�o do combust�vel: \n");
scanf("%f", &preco);

printf("Forne�a quantos quil�metros ser�o rodados: \n");
scanf("%f", &distancia);

//Calculando o custo//
custo = (distancia/consumo)*preco;

//Mostrando o custo//
printf("O custo total seria: %f", custo);

return 0;
}
