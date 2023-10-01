#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        float m;
        scanf("%f", &m);
        printf("%d dias\n", calculo(m));
    }
    

    return 0;
}

int calculo(double x) {

    int count = 0;
    while (x>1)
    {
        x = x/2;
        count++;
    }
    
    return count;
}