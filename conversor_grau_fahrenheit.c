#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{
	
setlocale (LC_ALL, "Portuguese_Brazil");

float grau_celsius;
float conversor;
	
	printf("================================================\n");
	printf("=          CONVERSOR DE TEMPERATURA            =\n");
	printf("================================================\n");
	
	printf("\nInforme a temperatura em Cº: ");	
	scanf("%f", &grau_celsius);
	
	conversor = ((9*grau_celsius) + 160) / 5;
	printf("\nA temperatura é: %.2f Fº (convertida para grau fahrenheit)\n", conversor);
	
	printf("\n");	
	system("pause");
	return 0;
	
}
