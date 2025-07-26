#include <stdio.h>
#include <stdlib.h>

int main(void)

{
char conceito;
float nota;
int numero;
	
	
	printf("Ola, Seja bem Vindo ao Assistente de Notas:\n");
	
	
	printf("Informe o conceito do aluno:\n");
	scanf("%c", &conceito);
	printf("Conceito do Aluno: %c\n", conceito);
	
	printf("Digite a nota do Aluno:\n");
	scanf("%f", &nota);
	printf("Nota do Aluno: %.1f\n",nota);	
	///////////////////////////////////////////////////
	
	printf("Informe o conceito do aluno:\n");
	scanf("%c", &conceito);
	
	printf("Digite a nota do Aluno:\n");
	scanf("%f", &nota);
	
	printf("Conceito: %c\n", conceito);
	printf("Nota: %.1f\n",nota);
	
	
	system("pause");
	return 0;
	
	
	
	
	
	
}
