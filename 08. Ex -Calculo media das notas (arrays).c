/*
Autor:Wagner Oliveira
Proposito: exemplo de array
Data: 24.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int notas[10];      //array para armazenar ate 10 valores
    int contagem=10;  //numero de valores para leitura
    int i;              //declaração da variavel i
    long soma=0;        //soma dos numeros
    float media=0.0f;   //media dos numeros

    printf("Entre coma as 10 notas: \n");
    for(i=0; i<contagem; i++){
        printf("%2u>",i+1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    media = (float)soma/contagem;
    printf("\nMedia das 10 notas eh: %.2f \n", media);

return 0;
}
