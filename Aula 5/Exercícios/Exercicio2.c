//Exercício 2 - aula 5 - Custo de viagem de acordo com gasolina//

#include<stdio.h>
int main () {
    float consumo, preco, distancia, custo;

//Coletando valores//
printf("Forneça o consumo do carro (km\L): \n");
scanf("%f", &consumo);

printf("Forneça o preço do combustível: \n");
scanf("%f", &preco);

printf("Forneça quantos quilômetros serão rodados: \n");
scanf("%f", &distancia);

//Calculando o custo//
custo = (distancia/consumo)*preco;

//Mostrando o custo//
printf("O custo total seria: %f", custo);

return 0;
}
