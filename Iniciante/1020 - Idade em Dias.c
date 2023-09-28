#include <stdio.h>
 
int main() {
 
    int quantDias;
    scanf("%d", &quantDias);

    int anos = quantDias/365;
    int meses = (quantDias%365)/30;
    int dias = (quantDias%365)%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
 
    return 0;
}