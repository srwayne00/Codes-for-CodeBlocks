/*
Autor:Wagner Oliveira
Proposito: Exemplo uso do for( estrutura de repeti��o)
Data: 24.06.2020
*/

#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main(){
    unsigned long long sum = 0LL;
    unsigned int count = 0, i;

    printf("\nEntre com os numeros inteiros para somar: ");
    scanf("%u", &count);

    for(i=1; i<count; i++){
    printf("Dentro da repeti��o\n");
    sum += i;
    }

    printf("\nTotal do primeiro %u numero � %llu\n", count, sum);

  return 0;
}
