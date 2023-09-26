#include <stdio.h>
 
int main() {
 
    double a, b, c;
    float pi = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    double triangulo = (c*a)/2;
    double circulo = pi*c*c;
    double trapezio = ((a+b)*c)/2;
    double quadrado = b*b;
    double retangulo = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;
}