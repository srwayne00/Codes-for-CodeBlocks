/*
Autor:Wagner Oliveira
Proposito: Exemplo tamanho dos bytes
Data: 25.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{

    printf("\nVariaveis do tipo char ocupam %u bytes", sizeof(char));
    printf("\nVariaveis do tipo short ocupam %u bytes", sizeof(short));
    printf("\nVariaveis do tipo int ocupam %u bytes", sizeof(int));
    printf("\nVariaveis do tipo long ocupam %u bytes", sizeof(long));
    printf("\nVariaveis do tipo float ocupam %u bytes", sizeof(float));
    printf("\nVariaveis do tipo double ocupam %u bytes", sizeof(double));
    printf("\nVariaveis do tipo long double ocupam %u bytes", sizeof(long double));

return 0;
}
