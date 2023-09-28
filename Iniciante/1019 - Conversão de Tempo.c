#include <stdio.h>
 
int main() {
 
    int tempo;
    scanf("%d", &tempo);

    int minutos = tempo/60;
    int segundos = tempo - (minutos*60);
    int horas = minutos/60;
    minutos =  minutos - (horas*60);

    printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}