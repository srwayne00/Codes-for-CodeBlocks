/*
Autor:Wagner Oliveira
Proposito: Exemplo lendo valor em array
Data: 25.06.2020
*/

#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main(){
    int day[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index=0; index<MONTHS; index++)
        printf("Mes %d tem %2d dias. \n", index+1, day[index]);

return 0;
}
