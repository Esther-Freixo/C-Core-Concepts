#include <stdio.h>

    
float vef(float n1, float n2, float n3) {
    float media = (n1 + n2 + n3) / 3;
    return media;
}

int main() {
    float n1, n2, n3;
    float vef(float n1, float n2, float n3);
    printf("Digite as 3 notas (de 0 a 10): ");
    
    do {
        printf("Digite as 3 notas (de 0 a 10): ");
        scanf("%f %f %f", &n1, &n2, &n3);
    } while ((n1 < 0 || n1 > 10) || (n2 < 0 || n2 > 10) || (n3 < 0 || n3 > 10));
    
    float media = vef(n1, n2, n3);
    
    if (media >= 6) {
        printf("Aprovado!");
    } else if (media >=4) {
        printf("Direito a VS");
    } else {
        printf("Reprovado");
    }
    
    return 0;
}
