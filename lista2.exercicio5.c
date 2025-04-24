#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X = 1, Z = 0, total = 0;

    while (X > Z) {
        printf("Digite um valor para X: ");
        scanf(" %d", &X);
        
        printf("Digite um valor para Y: ");
        scanf(" %d", &Z);
    }

    for (int i = X; i <= Z; i++) {
        if (total < Z) {
            total += i;
        }
    }
    
    printf("%d", total);
    return 0;
}
