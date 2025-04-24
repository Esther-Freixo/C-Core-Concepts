#include <stdio.h>

int main() {
 int a;
 int b;
 int c;
 
 printf("Digite 3 números número: ");
 scanf("%d %d %d", &a, &b, &c);

int bigger;

if (a > b && a > c) {
    bigger = a;
}
else if (b > c) {
    bigger = b;
}
else {
    bigger = c;
}

int smaller;

if (a < b && a < c) {
    smaller = a;
}
else if (b < c) {
    smaller = b;
}
else {
    smaller = c;
}

if (a % 2 == 0) {
    printf("%d é par\n", a);
}
if (b % 2 == 0) {
    printf("%d é par\n", b);
}
if (c % 2 == 0) {
    printf("%d é par\n", c);
}

int media;

media = (a + b + c) / 3;

 printf("1: %d ,2: %d, 3: %d\n", a, b, c);
 printf("O Maior valor é: %d\n", bigger);
 printf("O Menor valor é: %d\n", smaller);
printf("A média é: %d", media);
}