/* Exercício 03 - Aula 13 - Faça um programa para ler número inteiros positivos até que um número menor
ou igual a zero seja digitado. Esses valores devem ser armazenados em um vetor.
Após a leitura, seu programa deverá percorrer o vetor para encontrar o maior
elemento, exibir o vetor e o maior elemento.*/

#include<stdio.h>

int main () {

    float num, numeros[1000], maior;
    int cont=0, vetor;


        printf("Forneça o %d número inteiro positivo: ", cont + 1);
        scanf("%f", &num);

        while (num > 0){
            numeros [cont] = num;
            cont ++;
            printf("\nForneça o %d número inteiro positivo: ", cont + 1);
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
                    printf("Não foram fornecidos valores válidos.\n");
                }

                printf("\n===========\n\n");
                printf("Vetor do maior número fornecido: %d\n", vetor);
                printf("Maior número fornecido: %.f", maior);


return 0;
}
