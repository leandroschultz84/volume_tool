#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome [30];
	char cidade[15];


printf("Digite seu nome:\n");
gets(nome);

printf("\nDigite sua Cidade:\n");
fgets(cidade,15,stdin);

printf("\nSeu nome: %s\n", nome);
printf("\nSua Cidade: %s\n", cidade);

system("pause");
return 0;
	
	
	
	
}
