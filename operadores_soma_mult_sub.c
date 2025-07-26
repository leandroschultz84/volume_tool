#include <stdio.h>
#include <stdlib.h>

int main(void)

{
int n1, soma;
int n2;
int n3;
int n4, mult;
int n5, sub;
int n6;
int n7, divisor;
int n8;
	
	
	printf("-----------------------------------------------------\n");
	printf(" - Bem Vindo ao Assitente de Operadores Aritmeticos -\n");
	printf("-----------------------------------------------------\n");
	
	printf("Digite um numero:\n");
	scanf("%d", &n1);
	
	printf("Digite outro numero:\n");
	scanf("%d", &n2);
	
	soma= n1+n2;
    printf("Resultado da soma: %d + %d = %d\n", n1, n2, soma);

	printf("\nDigite um numero:\n");
	scanf("%d", &n3);
    
    printf("Digite outro numero:\n");
	scanf("%d", &n4);
    
	mult= n3*n4;
	printf("Resultado da multiplicacao: %d * %d = %1.d\n", n3, n4, mult);


	printf("\nDigite um numero:\n");
	scanf("%d", &n5);
	
	printf("Digite outro numero:\n");
	scanf("%d", &n6);

 	sub= n5-n6;
 	printf("Resultado da subtracao: %d - %d = %d\n", n5, n6, sub);


	printf("\nDigite um numero:\n");
	scanf("%d", &n7);

	printf("Digite outro numero:\n");
	scanf("%d", &n8);
	
	divisor= n7/n8;
	printf("Resultado da divisao: %d / %d = %d\n", n7, n8, divisor);


system("pause");
return 0;

}
	
	
	
	
	
	
	
	
		

