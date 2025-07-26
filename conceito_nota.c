#include <stdio.h>
#include <stdlib.h>

int main(void)


{
	
char conceito;
float nota;
int numero;
		
	
	printf("Informe o conceito do aluno:\n");
	scanf("%c", &conceito);
	
	printf("Digite a nota do Aluno:\n");
	scanf("%f", &nota);
	
	printf("Conceito: %c\n", conceito);
	printf("Nota: %.1f\n",nota);
	
	
	system("pause");
	return 0;
}
