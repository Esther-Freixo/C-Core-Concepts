#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userChar;
    char randomChar;

    randomChar = 'a' + rand() % 26;

    while (1) {
        printf("Digite um char e tente adivinhar: ");
        scanf(" %c", &userChar);

        if (userChar == randomChar) {
            printf("Parabéns! Você acertou: %c\n", randomChar);
            break;
        }

        if (userChar > randomChar) {
            printf("%c é maior que a minha letra\n", userChar);
        } else {
            printf("%c é menor que a minha letra\n", userChar);
        }

        printf("\n");
    }

    return 0;
}
