#include <stdio.h>

int main() {
        int sec;
        printf("Digite um número inteiro para ser convertido em horas, minutos e segundos \n");
       scanf("%d", &sec);
       
       int hours = sec / 3600;
       
       int minutes = (sec % 3600) / 60;
       
       int seconds = (sec % 3600) % 60;
       
       
        printf("Horas: %d\n", hours);
        printf("Minutos: %d\n", minutes);
        printf("Segundos: %d\n", seconds);
        
    }