#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)

{
	
setlocale (LC_ALL, "Portuguese, Brazil");	

int a, b, soma;	
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &a);
	
	printf("\nDigite um n�mero inteiro: ");
	scanf("%d", &b);
	
	soma = a+b;
	printf("\nO valor da soma = %d\n", soma);
	
	if(soma >= 10) //Se
	{
		
		
		printf("\nO valor da soma � igual ou maior que 10 \n");
		printf("Valor alto");
		printf("\n\nFIM DO PROGRAMA");
	}
	
	else //Se n�o
	{
		
		printf("\nO valor da soma � menor que 10 \n");
		printf("Valor baixo");
		printf("\n\nFIM DO PROGRAMA");
		
	}
	
printf("\n\n");	
system("pause");
return 0;	
	
}
