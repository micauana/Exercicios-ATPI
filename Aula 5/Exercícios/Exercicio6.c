//Exercício 6 - aula 5 - Volume de um cilindro//
#include<stdio.h>

int main(){

    float altura, raio, pi, volume;

    //Recolhendo valores//
    printf("Forneça a altura do cilindro: \n");
    scanf("%f", &altura);
    printf("Forneça o raio do cilindro: \n");
    scanf("%f", &raio);

    //Cáluclos e Variáveis//
    pi = 3.141592;
    volume = pi*(raio*raio)*altura;

    //Mostrando//
    printf("Volume do cilindro: %f", volume);


return 0;
}
