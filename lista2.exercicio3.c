#include <stdio.h>

int main () {
    int nTermos, nAc, n1 =1, n2 = 0;
    printf("Digite o número de termos: ");
    scanf("%d", &nTermos);
    
    for (int i = 1; i <= nTermos; i++) {
        nAc = n1 + n2;
        n1 = n2;
        n2 = nAc;
        
        printf("%d ", nAc);
    }

    return 0;
}