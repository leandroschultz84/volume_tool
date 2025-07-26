#include<stdio.h>
#include<stdlib.h>

float larg;

int main(void)
{
    printf("Calculadora de Volume  v1.0\n\n");
    printf("Autor: Leandro Schultz\n\n");

    printf("Digite o largura da piscina: ");
    scanf("%f", &larg);
    printf("largura = %.2f\n", larg);
}