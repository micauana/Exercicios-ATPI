//Exercicio 12 - aula 4 - Potência//
#include<stdio.h>;
int main(){
float potencia, dias, horas, hpd, wpd, wpm, wpa, kwpd, kwpm, kwpa, preco, gasto;
printf("Forneça a potência: \n");
scanf("%f", &potencia);
printf("Forneça as horas: \n");
scanf("%f", &horas);
printf("Forneça os dias: \n");
scanf("%f", &dias);
printf("Forneça o Preço: \n");
scanf("%f", &preco);

hpd = horas/dias;
printf("Horas/dia: %f\n", hpd);
wpd = potencia/dias;
printf("Watts por dia: %f\n", wpd);
wpm = wpd*30;
printf("Watts por mês: %f\n", wpm);
wpa = wpm*12;
printf("Watts por anos: %f\n", wpa);
kwpd = potencia*hpd/1000;
printf("Kilowatts por dia: %f\n",kwpd);
kwpm = kwpd*30;
printf("Kilowatts por mês: %f\n", kwpm);
kwpa = kwpm*12;
printf("Kilowatts por ano: %f\n", kwpa);
gasto = kwpm*preco;
printf("Gasto: %f", gasto);
return 0;
}
