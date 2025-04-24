#include <stdio.h>

int main() {
    char op;
    printf("Digite um operador (+, -, / ou *):\n");
    scanf(" %c", &op);

    int a, b;
    printf("Agora digite dois números: ");
    scanf("%d %d", &a, &b);

    if (op == '+') {
        int soma = a + b;
        printf("Resultado da soma de %d + %d = %d\n", a, b, soma);
    } else if (op == '-') {
        int sub = a - b;
        printf("Resultado da subtração de %d - %d = %d\n", a, b, sub);
    } else if (op == '/') {
        if (b != 0) {
            int div = a / b;
            printf("Resultado da divisão de %d / %d = %d\n", a, b, div);
        } else {
            printf("Não é possível realizar uma divisão por zero.\n");
        }
    } else if (op == '*') {
        int mul = a * b;
        printf("Resultado da multiplicação de %d * %d = %d\n", a, b, mul);
    } else {
        printf("Operador inválido.\n");
    }

    return 0;
}
