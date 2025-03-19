/**Integrantes: Igor Pereira Marani e Milena Cauana Rejani Eduardo**/

/* Exerc�cio 2*/

#include<stdio.h>

int main () {

    char palavra[1000];
    int ocorrencias, a;

    //Coletando a palavra
        printf("Digite uma palavra: ");
        gets(palavra);
        printf("\n==========\n\n");

    //Contando as letras
        for (int i = 0; palavra[i] != '\0' ; i++){

        int cont = 1;
            for (int a = i + 1; palavra[a] != '\0'; a++){

                if (palavra[i] == palavra[a] && palavra[i] != '_'){
                    cont = cont + 1;
                    ocorrencias = cont;
                    palavra[a] = '_';
                }else{
                ocorrencias = cont;
                }
           }



           if (palavra[i]!= '_'){

           printf("%c : %d ocorrencia (s)\n", palavra[i], ocorrencias);
           }

        }

return 0;
}
