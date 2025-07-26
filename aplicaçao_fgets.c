#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
char nome[40];
int idade;
int ano_de_nascimento;
char cidade[15];
	
	printf("Digite seu nome:\n");
	fgets(nome, 40,stdin);
	
	printf("\nPor Favor, digite sua cidade:\n");
	fgets(cidade, 15, stdin);
	
	printf("\nPor Favor, digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("\nPor Favor, digite seu ano de nascimento:\n");
	scanf("%d", &ano_de_nascimento);
	
	printf("\nSeu Nome: %s\n", nome);
    printf("\nSua Cidade: %s\n", cidade);	
	printf("\nSeu Ano de nascimento: %d\n", ano_de_nascimento);
	printf("\nSua Idade: %d anos\n", idade);
	
	
	
system("pause");
return 0;	
	
}
