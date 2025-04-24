#include <stdio.h>

int main () {
    int num, soma = 0;
    printf("Digite a quantidade de número a serem somados: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        soma += 2*i+1;
    }
    
    printf("%d", soma);
    return 0;
}