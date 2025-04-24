#include <stdio.h>

int main () {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
            printf("Não é primo!");
            return 0;
    }

    for (int i = 2; i < num; i++) {
        if(num % i == 0 ) {
            printf("Não é primo!");
            return 0;
        }
    }

    printf("É Primo");
    return 1;
}