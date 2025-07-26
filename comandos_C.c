#include<stdio.h>
#include<stdlib.h>

int main(void)                       //Entrada Principal

{
	    //Declaraçao de Variaveis

int n=10;                        //Numero inteiro ex:3 7 5 20
float n2=6.79;  	            //Casa decimal ex:275.00
char letra= 'A';   			   //Variavél do tipo Caractere
char frase[10]= "Bom Dia";	  //Mais de uma palavra
double n3=1.245698;	         //Indicado para calc. cientifico, maior precisao(dupla,)ate 15 casas decimais
int valor1, valor2, soma;

	
	printf ("Hello World\n");
	printf ("Exibindo um Numero inteiro, %d\n",n);	      //%d(DECIMAL), para numero inteiro e decimal
	printf ("Exibindo um Numero real, %.2f\n",n2);       //%f (FLOAT), para numeros decimal ex:1800,00
	printf ("Exibindo um Caractere, %c\n",letra);       //%c  (CARACTERE), no caso uma unica letra A
	printf ("Exibindo uma Frase, %s\n",frase);         //%s   (STRING), no caso mais de uma palavra
	printf ("Exibindo uma Variavel Double, %f\n",n3); //%f    (FLOAT), para numeros decimal ex:1800,00
	printf ("Valores Exibidos na Tela, %d, %.2f, %c, %s, %f\n", n, n2, letra, frase, n3);
	
	printf("Digite um numero inteiro: ");
    scanf("%d", &valor1, valor1); 			   //& endereco

	printf("Digite outro numero inteiro:");
	scanf("%d", &valor2, valor2);
	
	soma = valor1 + valor2;                   //Operadores 
	printf("Resultado da Soma %d + %d = %d\n", valor1, valor2, soma);
	
	
system ("pause");							  //Somente no Windows
return 0;
	
	
}
