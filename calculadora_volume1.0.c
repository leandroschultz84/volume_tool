#include <stdio.h>
#include <stdlib.h>

	
	  
int main(void) 
{
	float larg, comp, prof, resp_operacao;
	
	
	printf("Calculadora de Metros Cubico  v1.0\n\n");
	printf("Autor: Leandro Schultz\n\n");
	
	printf("Digite a largura da piscina com numeros inteiros: ");
	scanf("%f", &larg);
	
	
	printf("\nDigite o comprimento da piscina com numeros inteiros: ");
	scanf("%f", &comp);


	printf("\nDigite a profundidade da piscina com numeros digitando ponto: ");
	scanf("%f", &prof);	

	printf("\n========================================================================");
	printf("\n\nLargura = %.2f\n\n", larg);
	printf("Comprimento = %.2f\n\n", comp);
	printf("Profundidade = %.2f\n\n", prof);
	
	resp_operacao = larg * comp * prof;
	
	printf("Volume da piscina: %.2f mil metros cubicos de agua  \n\n", resp_operacao);
	printf("Ate Breve!");
	printf("\n\n=========================================================================\n");
	
	
	
	system("pause"); 
	return 0;
}
