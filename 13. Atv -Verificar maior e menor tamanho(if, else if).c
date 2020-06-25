/*
Autor:Wagner Oliveira
Proposito: 1° Atividade Monitor - Verificar o maior e menor número.
Data: 24.06.2020
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma;

    printf("Por favor, declare o primeiro numero: \n");
    scanf("%i", &num1);

    printf("Por favor, declare o segundo numero: \n");
    scanf("%i", &num2);

    if (num2 > num1){
    soma = num2 - num1;
    printf("\nMaior numero %i ",num2);
    printf("\nMenor numero %i ",num1);
    printf("\nDiferenca dos num = %d " ,soma);

    }else if (num1 - num2){
    soma = num1 - num2;
    printf("\nMaior numero %i ",num1);
    printf("\nMenor numero %i ",num2);
    printf("\nDiferenca dos num = %d " ,soma);
    }
    return 0;
}
