#include <stdio.h>
#include <stdlib.h>

int main(void)

{

float nu1, nu2, media;
char frase[35]= "Ola, Seja Bem Vindo";
char nome[40];
	
	
	printf("\nDigite seu nome completo:\n");
    fgets(nome,40,stdin);

	printf("\n%s %s\n",frase, nome);
    printf("\n---------------------------------\n");
    printf("\n----- CALCULADORA DA MEDIA ------\n");
    printf("\n---------------------------------\n");

	printf("\nDigite sua primeira nota de 0 a 10:\n");
	scanf("%f", &nu1);
	
	printf("\nDigite sua segunda nota de 0 a 10:\n");
	scanf("%f", &nu2);
	
	media= (nu1+nu2) / 2;
	
	printf("\nSua media de notas: %.2f\n", media);


system("pause");	
return 0;	
	
}
