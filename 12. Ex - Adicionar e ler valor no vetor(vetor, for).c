/*
Autor:Wagner Oliveira
Proposito: Exemplo add valor no vetor.
Data: 25.06.2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int A=5, i, vet[5];

    for (i=0; i<6; i++){
        printf("\nDigite o numero %d: \t", i);
        scanf("%d", &vet[i]);
    }
    for (i=0; i<6; i++){
        printf("\n Posição %d é igual a %d: \t", i, vet[i]);
    }
return 0;
}
