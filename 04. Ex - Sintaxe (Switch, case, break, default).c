/*
Autor:Wagner Oliveira
Proposito: Exemplo switch case break default
Data: 23.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float valor1, valor2;
    char operator;

    printf("Digite a sua expressão: \n");
    scanf("%f %c %f", &valor1 ,&operator ,&valor2);

    switch(operator){
        case '+':
            printf("%.2\n", valor1 + valor2);
        break;
        case '-':
            printf("%.2\n", valor1 - valor2);
        break;
        case '*':
            printf("%.2\n", valor1 * valor2);
        break;
        case '/':
            if(valor2==0){
                printf("Divisão por zero!.\n");
            }else{
            printf("%.2\n", valor1 / valor2);
        }break;
        default:
            printf("Operador desconhecido!\n");
        break;
    }
return 0;
}
