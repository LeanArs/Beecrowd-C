#include <stdio.h>
 
int main() {
 
    double raio;
    double pi = 3.14159;
    double volume;

    scanf("%lf", &raio);

    volume = (4 * pi * raio * raio * raio)/3;
 
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}