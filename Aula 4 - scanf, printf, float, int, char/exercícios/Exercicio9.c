//Exerc�cio 9 - aula 4 - salario inicial e salario final//
#include<stdio.h>
int main(){
float salario_inicial, salario_final;
printf("Forne�a o sal�rio inicial: \n");
scanf("%f", &salario_inicial);
salario_final = salario_inicial + salario_inicial*0.25;
printf("Sal�rio final: %f", salario_final);
return 0;
}
