#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userGuess;
    int randomNum;
    
    srand(time(NULL)); //Faz o rand() gerar um número aleatório
    randomNum = rand() % 101;

    while (1) {
        printf("Digite um número e tente adivinhar o sorteado: ");
        scanf("%d", &userGuess);

        if (userGuess == randomNum) {
            printf("Parabéns! Você acertou: %d\n", randomNum);
            break;
        }

        if (userGuess > randomNum) {
            printf("%d é maior que o número sorteado\n", userGuess);
        } else {
            printf("%d é menor que o número sorteado\n", userGuess);
        }

        printf("\n");
    }

    return 0;
}
