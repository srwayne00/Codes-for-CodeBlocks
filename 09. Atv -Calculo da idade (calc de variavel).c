/*
Autor:Wagner Oliveira
Proposito: 1° Atividade monitor - Calculo da idade
Data: 24.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoAtual, anoNasc, idade;

    printf("Por favor, informe o ano de nascimento: ");
    scanf("%i", &anoNasc);

    printf("Por favor, informe o ano para calculo: ");
    scanf("%i", &anoAtual);

    idade = anoAtual - anoNasc;

    printf("Voce tem/tera no ano %i, %i anos de idade.", anoAtual, idade);

  return 0;
}
