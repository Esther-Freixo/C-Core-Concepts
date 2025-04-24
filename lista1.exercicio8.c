#include <stdio.h>

void total_de_notas(int valor) {
    int nota100 = valor / 100;
    valor = valor % 100;

    int nota50 = valor / 50;
    valor = valor % 50;

    int nota20 = valor / 20;
    valor = valor % 20;

    int nota10 = valor / 10;
    valor = valor % 10;

    int nota5 = valor / 5;
    valor = valor % 5;

    int nota1 = valor;
}

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    total_de_notas(valor);
    return 0;
}
