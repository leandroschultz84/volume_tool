#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)

{
setlocale (LC_ALL, "Portuguese, Brazil");

float n1, n2, media;

	printf("Digite sua nota: ");
	scanf("%f", &n1);
	
	printf("\nDigite sua nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2) / 2;	
	printf("\nSua média de notas: %.2f\n", media);	


  if(media >5)
  {
  	
  	printf("\nO valor das notas é maior que 5, portanto:\n");
  	printf("\nALUNO APROVADO COM SUCESSO\n");
  	
  }
  
  else
  {
  	
  	printf("\n O valor das notas é menor ou igual a 5, portanto:\n");// linha opcional, pode ser direto.
  	printf("\nALUNO REPROVADO\n");
  	
  }




	
printf("\n");
system("pause");
return 0;	
}
