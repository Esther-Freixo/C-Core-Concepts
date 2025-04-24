#include <stdio.h>
#include <math.h>

void calcRaiz(float a, float b, float c) {

    float delta = pow(b,2) - (4 * a * c);
    
    if (delta < 0) {
        printf("Não há raizes");
        return;
    }
    
    float x1 = ((-b) + sqrt(delta)) / (2 * a);

    float x2 = ((-b) - sqrt(delta)) / (2 * a);
    
    printf("x1 = %.2f, x2 = %.2f", x1, x2);
}

int main() {
    float a = 1, b = -5, c = 6;

    calcRaiz(a, b, c);

    return 0;
}
