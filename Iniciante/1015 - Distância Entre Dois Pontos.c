#include <stdio.h>
#include <math.h>
 
int main() {
 
    float a, b, c, d;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    float distancia = ((c-a)*(c-a)) + ((d-b)*(d-b));
    sqrt(distancia);


    printf("%.4f\n", distancia);

    return 0;
}