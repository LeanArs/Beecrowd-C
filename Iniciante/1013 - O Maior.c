#include <stdio.h>

int main(){

    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);

    res = maior(c, maior(a, b));

    printf("%d eh o maior\n", res);

    return 0;
}

int maior(int x, int y){

    int calculo;
    calculo = (x + y + abs(x-y))/2;

    return calculo;
}