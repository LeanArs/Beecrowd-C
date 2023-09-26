#include <stdio.h>
 
int main() {
 
    int x;
    float y;

    scanf("%d %f", &x, &y);

    float calc = x/y;

    printf("%.3f km/l\n", calc);
 
    return 0;
}