#include <stdio.h>

int main()
{
    // Inicia como o primeiro número de 4 algarismos
    int num = 1000, metade1, metade2, soma, quadrado;

    for (int i = num; i < 10000; i++) {
        metade1 = i / 100;
        metade2 = i % 100;
        soma = metade1 + metade2;
        quadrado = soma * soma;
        if(quadrado == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
