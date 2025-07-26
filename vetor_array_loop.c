#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{
	
setlocale (LC_ALL, "Portuguese, Brazil");	
	
float vetor[5]= {7, 8, 9.5, 9.9, 5.2};	
int i; //indice	
	
	printf("\nEXIBINDO OS VALORES DOS VETORES:\n");
    
	for(i=0; i<=4; i++)
	{
		printf("\nVetor[%d] = %.2f\n", i, vetor[i]);
		
	}
	
	
	
		
printf("\n");	
system("pause");
return 0;	
	
}
