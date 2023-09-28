#include <stdio.h>
 
int main() {
 
    int n, s;
    scanf("%d", &n);
    s = n;

    int quant100 = n / 100;
    n =  n - (quant100*100);
    int quant50 = n / 50;
    n =  n - (quant50*50);
    int quant20 = n / 20;
    n =  n - (quant20*20);
    int quant10 = n / 10;
    n =  n - (quant10*10);
    int quant5 = n / 5;
    n =  n - (quant5*5);
    int quant2 = n / 2;
    n =  n - (quant2*2);
    int quant1 = n / 1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", s, quant100, quant50, quant20, quant10, quant5, quant2, quant1);
 
    return 0;
}