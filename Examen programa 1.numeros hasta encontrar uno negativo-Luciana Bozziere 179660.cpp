/*Programa que recibe números hasta encontrar uno negativo*/

#include <stdio.h>
#include <math.h>

int main ()
{
	float  a;
	
	while(a>=0)
	{
	  printf("Escribe un numero:\n");
	   scanf("%f", &a);
	  
	   if (a>=0)
	   {
	   	printf("\t es un numero positivo\n\n");
	   }
	   else 
	   {
	   	printf("Es un numero negativo\n");
	   }   
	
	}
	return 0;
}
	
