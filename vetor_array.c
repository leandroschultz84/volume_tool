#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{
	
setlocale (LC_ALL, "Portuguese, Brazil");	
	
float vetor[5]= {7, 8, 9.5, 9.9, 5.2};	
	
	
	printf("\nExibindo os valores dos vetores:\n");
    printf("\nVetor[0] = %.2f\n", vetor[0]);
	printf("\nVetor[1] = %.2f\n", vetor[1]);
	printf("\nVetor[2] = %.2f\n", vetor[2]);
	printf("\nVetor[3] = %.2f\n", vetor[3]);
	printf("\nVetor[4] = %.2f\n", vetor[4]);
	
	
	
	
	
	
printf("\n");	
system("pause");
return 0;	
	
}
