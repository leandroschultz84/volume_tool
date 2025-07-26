#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float prod, porcente;


printf("Calculadora de Desconto v1.0\n");
printf("Autor: Leandro Schultz\n");

printf("\nInforme o valor do produto em reais:");
scanf("%f", &prod);
printf("O valor digitado %.2f \n\n", prod);

printf("Aviso: O desconto aplicado ao valor do produto sera de 10 por cento!\n\n");

porcente = (prod * 100.0) / 10;
printf("O desconto obtido foi de %.2f\n\n", porcente);





system("pause");
return 0;
}
