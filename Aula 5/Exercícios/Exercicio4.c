//Exerc�cio 4 - aula 5 - segundos, minutos e horas//
#include<stdio.h>

int main(){
    float seg, min, h;

    //Recolhendo valores//
    printf("Forne�a o valor em segundos: \n");
    scanf("%f",&seg);

    //C�lculos//
    min = seg/60;
    h = seg/3600;

    //Mostrando na tela//
    printf("Segundos: %f\n", seg);
    printf("Minutos: %f\n", min);
    printf("Horas: %f\n", h);


return 0;
}
