/* Exercício 08 - Aula 13 - Leia N números inteiros e armazene-os em um vetor. O valor de N é fornecido
pelo usuário. Em seguida, imprima os elementos que são primos e suas respectivas
posições no vetor.*/

#include<stdio.h>
#include<math.h>

int main () {

    int N, numeros[1000], primos[1000], posicoes[1000];

    //Coletando N
        printf("Quantos números serão fornecidos? ");
        scanf("%d", &N);

        printf("\n==================\n\n");

    //Coletando os números
        int b = 0;
        int nao_primo = 0;

        for (int a = 0; a < N; a++){
            printf("Forneça o %dº número: ", a + 1);
            scanf("%d", &numeros[a]);

            if (numeros[a] == 2){
               primos[b] = numeros[a];
               posicoes[b] = a;
               b++;
            } else {
            for (int c = 2; c < numeros[a]; c++){

                if (numeros[a] % c == 0){
                    nao_primo = 2;
                }
                }
                if (nao_primo == 0) {
                    primos[b] = numeros[a];
                    posicoes[b] = a;
                    b++;
            }
            }
            nao_primo = 0;
        }

        printf("\n============\n\n");

    //Exibindo os números primos e seus vetores

        for (int i = 0; i < b; i++){
            printf("O valor %d é um número primo, que está armazenado no vetor %d\n\n", primos[i], posicoes[i]);
        }

return 0;
}
