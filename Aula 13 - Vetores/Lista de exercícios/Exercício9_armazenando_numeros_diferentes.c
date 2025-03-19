/* Exercício 09 - Aula 13 - Faça um programa para ler 10 números DIFERENTES a serem armazenados
em um vetor. Os números deverão ser armazenados no vetor na ordem que forem
lidos, sendo que caso o usuário digite um número que já foi digitado
anteriormente, o programa deverá pedir para o usuário digitar outro número. Note
que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se
ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final
que foi digitado, o qual não terá repetição de valores. */

#include<stdio.h>

int main () {

    int numeros[1000];

    printf("Forneça dez números diferentes: \n");
    printf("\n");

    //Armazenando os valores
        for (int i = 0; i < 10; i++){
            printf("%dº número: ", i + 1);
            scanf("%d", &numeros[i]);

            for (int b = 0; b < i; b++){
                if (numeros[i] == numeros[b]){
                    printf("\n !Número já fornecido!\n");
                    i--;
                }
            }


    }

    printf("\n==============\n");

    //Exibindo valores que foram armazenados
    printf("Números armazenados: ");
        for (int a = 0; a < 10; a++){
            printf(" %d ", numeros[a]);
        }
        printf("\n\n");


return 0;
}
