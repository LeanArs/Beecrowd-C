#include <stdio.h>
 
int main() {
 
    int a, b;
    double calc;
    scanf("%d %d", &a, &b);
 
    calc = a*b;
    calc = calc/12;

    printf("%.3f\n", calc);

    return 0;
}