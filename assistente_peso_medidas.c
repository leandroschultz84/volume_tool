#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	
char nome[40];
int idade;
int peso;
float altura;

	printf("Bem Vindo ao Assistente de Peso ideal:\n");
	
	printf("Digite seu nome:\n");
	fgets(nome,40,stdin);
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite sua altura:\n");
	scanf("%f", &altura);	
	
	
	
system("pause");
return 0;	
	
	
	
}
