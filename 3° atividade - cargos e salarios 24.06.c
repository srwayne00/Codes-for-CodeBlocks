/*
Autor:Wagner Oliveira
Proposito: 3° Atividade Monitor
Data: 25.06.2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int cod;
    float salario, nSalario, percent;
    char cargo[4][12]={"Escriturario, Secretario, Caixa, Gerente Diretor"};

    printf("\n................Informe o codigo do seu cargo.....................\n\n");
    printf("[1]Escriturario, [2]Secretario, [3]Caixa, [4]Gerente ou [5]Diretor\n");
    scanf("%i" ,&cod);

        switch(cod){
        case 1:
            cargo[0] == "Escriturario";
            printf("Informe seu salario\n ");
            scanf("%f", &salario);
            percent = salario * 0.50;
            nSalario = salario + percent;
            printf("Cargo: %s - Aumento=R$ %1.2f Salario=R$ %.2f ",cargo ,percent ,nSalario);
        break;
        case 2:
            cargo [1]== "Secretario";
            printf("Informe seu salario\n ");
            scanf("%f", &salario);
            percent = salario * 0.35;
            nSalario = salario + percent;
            printf("Cargo: %s - Aumento=R$ %1.2f Salario=R$ %.2f ",cargo, percent ,nSalario);
        break;
        case 3:
            cargo [2]== "Caixa";
            printf("Informe seu salario\n ");
            scanf("%f", &salario);
            percent = salario *  0.20;
            nSalario = salario + percent;
            printf("Cargo: %s - Aumento=R$ %1.2f Salario=R$ %.2f ", cargo, percent ,nSalario);
        break;
        case 4:
            cargo [3]== "Gerente";
            printf("Informe seu salario\n ");
            scanf("%f", &salario);
            percent = salario *  0.10;
            nSalario = salario + percent;
            printf("Cargo: %s - Aumento=R$ %1.2f Salario=R$ %.2f ",cargo, percent ,nSalario);
        break;
        case 5:
            cargo [4]== "Diretor";
            printf("Informe seu salario\n ");
            scanf("%f", &salario);
            percent = 0;
            nSalario = salario + percent;
            printf("Cargo: %s - Aumento=R$ %1.2f Salario=R$ %.2f ",cargo, percent ,salario);
        break;
    }
return 0;
}
