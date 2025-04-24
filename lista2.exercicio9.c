#include <stdio.h>

int INVERTE(int num){
    int invertido = 0;
    
    while (num > 0){
        int ultDigito = num % 10;
        invertido = invertido * 10 + ultDigito;
        num = num / 10;
    }
    printf("Número invertido: %d", invertido);
    return invertido;
}

int main()
{
    int unsNum = -1;
    
    while (unsNum < 0) {
        printf("Digite um número positivo para ser invertido: ");
        scanf("%d", &unsNum);
    }
    
    INVERTE(unsNum);

    return 0;
}
