#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um número decimal para arredondamento: ");
    scanf("%f", &num);

    float paraBaixo = floor(num);
    float paraCima = ceil(num);
    printf("Arredondado para baixo: %.0f\n",paraBaixo);
    printf("Arredondado para cima: %.0f\n", paraCima);

    return 0;
}
