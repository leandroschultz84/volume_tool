#include <stdio.h>
#include <stdlib.h>

int main(void)

{

char nome[40];

	printf("Por favor, digite seu nome:\n");
	scanf("%s", nome); // %s frase, nome etc... %c um caracterer A,B,C,D, (somente nome)
	printf("Nome digitado: %s\n", nome);
	
	printf("Por favor, digite seu nome:\n"); 
	fgets(nome, 40, stdin); // STDIN ( Teclado )
	printf("Nome digitado: %s\n", nome);
	
	
	system("pause");
	return 0;
}
