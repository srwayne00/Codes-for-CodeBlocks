/*
Autor:Wagner Oliveira
Proposito: 2° Atividade monitor - Calculo quantos salarios minimos
Data: 24.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarAtual, salarMin, salarQtd;

    printf("Por favor, informe seu salario atual: ");
    scanf("%f", &salarAtual);

    printf("Por favor, informe o salario minimo para calculo: ");
    scanf("%f", &salarMin);

    salarQtd = salarAtual / salarMin;
    printf("Voce tem %0.2f , salarios minimos",salarQtd);

return 0;
}
