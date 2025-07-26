#include <stdio.h>
#include <stdlib.h>

int main(void)

{

char nome[40];
int idade;
	
	
	printf("Por favor, digite seu nome:\n");
 	fgets(nome,40,stdin); // STDIN ( Teclado )

	printf("\nPor favor, digite sua idade:\n");
	scanf("%d",&idade); 
	

	printf("\nNome digitado: %s\n", nome);
	printf("Idade digitada: %d\n", idade);
	
	system("pause");
	return 0;
	
}
