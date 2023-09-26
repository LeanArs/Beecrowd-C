#include <stdio.h>

int main(){

    char nome[100];
    double salario, montante;

    scanf("%s %lf %lf", &nome, &salario, &montante);

    double comissao = 0.15 * montante;
    double total = comissao + salario;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}