/*
Autor:Wagner Oliveira
Proposito: Exemplo while
Data: 23.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n=0, i=1;

    printf("while vai repetir a variavel n e add 1 ate o numero informado\n");
    printf("Entre com um numero inteiro: \n");
    scanf("%d", &n);

    while (n >= i) {
        printf("%d n+1\n", n);
        ++i;
    }
return 0;
}
