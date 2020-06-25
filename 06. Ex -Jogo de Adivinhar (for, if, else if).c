/*
Autor:Wagner Oliveira
Proposito: Exemplo for if else
Data: 23.06.2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //biblioteca para gerar um numero oleatorio
int main ()
{
   int randomNumber=0, guess=0, numberofGuess=5;
   time_t t;

   srand((unsigned)time(&t)); //Iniciar os numeros aleatorios
   randomNumber=rand() %21;   //pegar um numero aleatorio
   printf("Este eh um jogo de adivinhar!!\n"); //Titulo
   printf("Voce precisa escolher um numero de 0 a 20"); //Instrução

   for(numberofGuess = 5; numberofGuess > 0; numberofGuess--){
        printf("\nVoce tem %d tenta%s restantes", numberofGuess, numberofGuess ==1 ? "y": "tivas");
        printf("\nEntre com um numero: ");
        scanf("%d", &guess);
        if(guess==randomNumber){
            printf("\nParabens, voce adivinhou!\n");
            return;
        }
        else if(guess < 0 || guess > 20) //Verifica se é um numero valido
            printf("Voce precisa escolher entre 0 e 20 apenas!");
        else if(randomNumber > guess)
            printf("Lamento, %d esta errado. Meu numero eh maior que isso\n", guess);
        else if(randomNumber < guess)
            printf("Lamento, %d esta errado. Meu numero eh menor que isso\n", guess);
   }
   printf("Voce tinha 5 tentativas e errou. O numero secreto era %d\n", randomNumber);

return 0;
}
