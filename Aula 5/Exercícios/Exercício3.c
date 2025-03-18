//Exercício 3 - aula  5 - valor do prêmio de acordo com porcentagem de cada investidor//
#include<stdio.h>
int main (){

float premio, v1, v2, v3, p1, p2, p3;

//Arrecadando informações//
printf("Forneça o valor total do prêmio: \n");
scanf("%f", &premio);
printf("Forneça o valor investido pela peimeira pessoa: \n");
scanf("%f", &v1);
printf("Forneça o valor investido pela segunda pessoa: \n");
scanf("%f", &v2);
printf("Forneça o valor investido pela terceira pessoa: \n");
scanf("%f", &v3);

//Calculando a porcentagem de cada//
p1 = (v1/(v1+v2+v3)*premio);
p2 = (v2/(v1+v2+v3)*premio);
p3 = (v3/(v1+v2+v3)*premio);

//Mostrando p1, p2 e p3//
printf("Premio primeira pessoa: %f\n",p1);
printf("Premio segunda pessoa: %f\n",p2);
printf("Premio terceira pessoa: %f\n",p3);

return 0;
}
