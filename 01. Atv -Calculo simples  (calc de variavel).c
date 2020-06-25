/*
Autor:Wagner Oliveira
Proposito: 1° Atividade monitor- calculo simples de variaveis
Data: 23.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    float n1, n2, resultado;

    printf("Entre com o primeiro numero: \n");
    scanf("%f", &n1);
    printf("Entre com o segundo numero: \n");
    scanf("%f", &n2);

    resultado = n1 + n2;
    printf("\n%.1f + %.1f = %.1f", n1, n2, resultado);

    resultado = n1 - n2;
    printf("\n%.1f - %.1f = %.1f", n1, n2, resultado);

    resultado = n1 * n2;
    printf("\n%.1f * %.1f = %.1f", n1, n2, resultado);

    resultado = n1 / n2;
    printf("\n%.1f / %.1f = %.1f", n1, n2, resultado);

}
