#include <stdio.h>

int main(){

    int a, b;
    float c;

    scanf("%d %d %f", &a, &b, &c);

    float d = b * c;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", a, d);

    return 0;
}