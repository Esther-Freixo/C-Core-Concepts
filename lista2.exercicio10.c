#include <stdio.h>

int mdc (int x, int y) {
    while (y != 0) {
        int resto = x % y;
        x = y;
        y = resto;
    }
    
    return x;
}

int main()
{
    int x = -1, y = -1;
    
    while (x < 0 && y < 0) {
        printf("Digite um número positivo para o X: ");
        scanf("%d", &x);
        
        printf("Digite um número positivo para o Y: ");
        scanf("%d", &y);
    }
    
    int result = mdc(x, y);
    printf("o MDC entre %d e %d é: %d",x, y, result);

    return 0;
}
