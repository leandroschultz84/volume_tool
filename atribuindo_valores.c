#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(void)

{
setlocale (LC_ALL, "Portuguese, Brazil");

char letra; //cont�m letras
int x; // n�meros inteiros 
float salario; // n�meros com casa decimal
	
	printf("\nATRIBUINDO VALORES:\n");
	//Atribuindo Valores 
	letra = 'A';
	x = 10;
	salario = 3.500;

	//Sa�da de Dados na Tela 	
	printf("\nLetra: %c\n",letra);
	printf("\nx: %d\n", x);
	printf("\nSal�rio: %.3f \n",salario);				
	
	
	
		
	printf("\n");
	system("pause");
	return 0;

}
	
	
	
	
	
	
	
	
	
	

