/*
Faça um programa para ler uma string com uma data no formato “DD/MM/AAAA”.
Após a leitura, o programa deve verificar se a data fornecida pelo usuário está no formato exigido.
*/
#include<stdio.h>
int main(){
    char data[100];
    int cont=0, valido=1;
    printf("Digite uma data no formato DD/MM/AAAA: ");
    gets(data);
    while(data[cont]!='\0'){
        cont++;
    }

    if (data[2]=='/' && data[5]=='/' && cont == 10){
        data[2]='0';
        data[5]='0';
        for(int i=0; i<cont;i++){
            if (!(data[i]=='0' || data[i]=='1' || data[i]=='2' || data[i]=='3' || data[i]=='4' || data[i]=='5'
                || data[i]=='6' || data[i]=='7' || data[i]=='8' || data[i]=='9')){
                valido = 0;
            }
        }
    }else{
        valido = 0;
    }

    if (valido){
        printf("Formato Valido\n");
    }else{
        printf("Formato invalido\n");
    }

    return 0;
}
