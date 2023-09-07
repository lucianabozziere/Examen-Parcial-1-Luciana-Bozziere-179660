/* Programa que suma los digitos de un numero*/
#include<stdio.h>
#include <math.h>

int main()
{
	int n;
	int a=0;
	
	printf("Escribe un numero de 2 o mas digitos:\n");
	scanf("%d", &n);
	while (n>0)
	{
		a= a + n%10;
		n= n/10;
		
	}
	printf("\n");
	printf("la suma de sus digitos es:");
	printf("%d", a);
return 0;	
}
    
  
