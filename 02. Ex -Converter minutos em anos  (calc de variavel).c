/*
Autor:Wagner Oliveira
Proposito: Exemplo converter  minutos em anos
Data: 23.06.2020
*/

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    double anos=0.0, dias=0.0, minutosEmAnos=0;
    int minuto=0;

    printf("Por favor, informe os minitos que deseja verificar: ");
    scanf("%d", &minuto);

    minutosEmAnos = (60 * 24 * 365);
    anos = (minuto / minutosEmAnos);
    dias = (minuto / 60.0) /24.0;

    printf("%d minutos eh aproximadamente %.2f Anos e %.2f Dias\n", minuto, anos, dias);
    return 0;
}
