#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
	setlocale (LC_ALL, "Portuguese, Brazil");
	int num1, num2;
	int op;
	char nome[30];
	char frase[40]= "Olá Seja Bem Vindo(a), ";
	
	printf("Digite seu nome completo:\n");
	gets(nome);		
	printf("\n%s" "%s\n", &frase, &nome);
	
	printf("\nDigite um número inteiro:\n");
	scanf("%d", &num1);
	
	printf("\nDigite outro número inteiro:\n");
	scanf("%d", &num2);
	
	op= num1+num2;
	
	printf("\nO resultado da soma entre %d + %d = %d\n", num1, num2,op);
	
	printf("\nAté Breve!\n");
	printf("\n"); 

system("\npause");
return 0;	
	
	
}
