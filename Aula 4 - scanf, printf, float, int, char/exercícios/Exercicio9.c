//Exercício 9 - aula 4 - salario inicial e salario final//
#include<stdio.h>
int main(){
float salario_inicial, salario_final;
printf("Forneça o salário inicial: \n");
scanf("%f", &salario_inicial);
salario_final = salario_inicial + salario_inicial*0.25;
printf("Salário final: %f", salario_final);
return 0;
}
