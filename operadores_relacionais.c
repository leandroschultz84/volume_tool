#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{

setlocale (LC_ALL, "Portuguese_Brazil");	

int x=10, y=5, z=7, k=7;
	

	printf("\n*Os operadores relacionais são usados para fazer comparações\n");	
	printf("\n*Quando o resultado da comparação é FALSO retornam 0 (zero)\n");
	printf("\n*Quando o resultado da comparação é VERDADEIRO retornam 1\n");
	
	printf("\nValor de x= %d\n", x);
	printf("\nValor de y= %d\n", y);
	printf("\nValor de z= %d\n", z);
	printf("\nValor de k= %d\n",k);
	
	printf("\n_____________________________\n");
	
	printf("\nExemplo 1  x>y:  %d\n", x>y);
	printf("\nExemplo 2  x<y:  %d\n", x<y);
	
	printf("\nExemplo 3  x==k: %d\n", x==k);
	printf("\nExemplo 4  x!=k: %d\n", x!=k);
	
	printf("\nExemplo 5  z >= x: %d\n", z>=x);
	printf("\nExemplo 6  z <= x: %d\n", z<=x);
	
	
	
	printf("\n");
	system("pause");
	return 0;
	
}
