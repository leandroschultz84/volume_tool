#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(void)

{
setlocale (LC_ALL, "Portuguese, Brazil");

char letra; //contém letras
int x; // números inteiros 
float salario; // números com casa decimal
	
	printf("\nATRIBUINDO VALORES:\n");
	//Atribuindo Valores 
	letra = 'A';
	x = 10;
	salario = 3.500;

	//Saída de Dados na Tela 	
	printf("\nLetra: %c\n",letra);
	printf("\nx: %d\n", x);
	printf("\nSalário: %.3f \n",salario);				
	
	
	
		
	printf("\n");
	system("pause");
	return 0;

}
	
	
	
	
	
	
	
	
	
	

