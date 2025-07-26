#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//////CONSTRUÇÃO DO CODIGO
int main(void)

{
setlocale (LC_ALL, "Portuguese, Brazil");	
	
float nota;
float media;
int contador;
float total;


	for (contador=1; contador<=4; contador++)
	{
	    
		printf("Informe a sua nota: ");
		scanf("%f", &nota, &total);
        media= (total)/ 4;

	}
	
printf("\nSua média de notas é %.2f ", media);

	
	

printf("\n\n");	
system("pause");	
return 0;	
	
}

