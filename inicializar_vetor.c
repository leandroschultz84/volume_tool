#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{
setlocale (LC_ALL, "Portuguese, Brazil");	
	
int vetor[20], i;

	for (i=0; i<=19; i++)

{
	
	vetor[i]= 0;
	
}
	
	
	for (i=0; i<=19; i++)

{
	printf("vetor[%d] = %d\n", i, vetor[i]);
	

}
	
	
printf("\n");	
system ("pause");	
return 0;	
}
