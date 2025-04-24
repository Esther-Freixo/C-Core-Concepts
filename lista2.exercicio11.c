#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    double result;
    printf("Digite um número para o X: ");
    scanf("%d", &x);
        
    printf("Digite um número para o Y: ");
    scanf("%d", &y);
    
    result = pow(x, y);
    printf("O resultado de %d elevado a %d é: %.0f\n", x, y, result);

    return 0;
}
