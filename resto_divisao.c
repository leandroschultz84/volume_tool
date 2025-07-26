#include<stdio.h>
#include<stdlib.h>

int main(void)

{
	
int n1, n2, resto, result;
char nome[40];
char frase[30]= "Ola, Seja Bem Vindo";

	printf("Informe seu nome:\n");
    fgets(nome,40,stdin);
    printf("\n%s %s\n", frase, nome);
	
	printf("\nDigite um numero:");
	scanf("\n%d", &n1);
		
	printf("\nDigite outro numero:");
	scanf("%d", &n2);
	
	result= n1/n2;
	printf("\nResultado da divisao: %d / %d = %d\n",n1, n2, result);
	
	
	resto= n1 % 2;
	printf("\nResto da Divisao: %d\n", resto);
	
	
	
	
	
	
	
system("pause");	
return 0;
}
