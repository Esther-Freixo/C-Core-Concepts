#include <stdio.h>


// a e b como int; c como float
int main() {
    int a = 3;
    int b = a / 2;
    float c = (float) b + 3.1;
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%.1f\n", c);
    
    return 0;
}
