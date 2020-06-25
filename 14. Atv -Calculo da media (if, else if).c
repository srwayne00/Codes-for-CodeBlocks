/*
Autor:Wagner Oliveira
Proposito: 2° Atividade Monitor -Calculo da média
Data: 24.06.2020
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;

    printf("Informe a nota final do primero bimestre\n");
    scanf("%f", &nota1);

    printf("Informe a nota final do segundo bimestre\n");
    scanf("%f", &nota2);

    printf("Informe a nota final do terceiro bimestre\n");
    scanf("%f", &nota3);

    printf("Informe a nota final do quarto bimestre\n");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

        if (media >= 5)
        {
            printf("A media das notas eh %.2f e o aluno esta (APROVADO)", media);
        }
        else if (media <=4)
        {
            printf("A media das notas eh %.2f e o aluno esta (REPROVADO)", media);
        }

    return 0;
}
