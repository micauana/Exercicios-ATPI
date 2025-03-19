/* Exerc�cio 03 - Aula 13 - Fa�a um programa para ler n�mero inteiros positivos at� que um n�mero menor
ou igual a zero seja digitado. Esses valores devem ser armazenados em um vetor.
Ap�s a leitura, seu programa dever� percorrer o vetor para encontrar o maior
elemento, exibir o vetor e o maior elemento.*/

#include<stdio.h>

int main () {

    float num, numeros[1000], maior;
    int cont=0, vetor;


        printf("Forne�a o %d n�mero inteiro positivo: ", cont + 1);
        scanf("%f", &num);

        while (num > 0){
            numeros [cont] = num;
            cont ++;
            printf("\nForne�a o %d n�mero inteiro positivo: ", cont + 1);
            scanf("%f", &num);
        }

        printf("\n==============\n\n");

        if (cont > 0){
            printf("Valores armazenados: ");
            maior = numeros[0];
            for (int i=0; i<cont; i++){
                printf(" %.2f,", numeros[i]);

                if (numeros[i] > maior){
                    maior = numeros [i];
                    vetor = i;
                }
                }
                } else {
                    printf("N�o foram fornecidos valores v�lidos.\n");
                }

                printf("\n===========\n\n");
                printf("Vetor do maior n�mero fornecido: %d\n", vetor);
                printf("Maior n�mero fornecido: %.f", maior);


return 0;
}
