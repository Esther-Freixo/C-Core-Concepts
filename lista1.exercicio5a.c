#include <stdio.h>


// a, b, c como float;
int main() {
    float a = 3;
    float b = (float) a / 2;
    float c = (float) b + 3.1;
    
    printf("%.1f\n", a);
    printf("%.1f\n", b);
    printf("%.1f\n", c);
    
    return 0;
}
