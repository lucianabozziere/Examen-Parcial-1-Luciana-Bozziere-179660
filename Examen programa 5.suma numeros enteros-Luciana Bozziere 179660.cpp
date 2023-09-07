/*Programa que suma N numeros enteros*/
#include<stdio.h>
#include <math.h>

int main()
{
	int a;
	int b=1;
	int c=0;
	
	printf("Escribe un numero entero:\n");
	scanf("%d", &a);
	
	while (b<=a)
	{
		c= b+c;
		b=b+1;
	}
	printf("la suma de los numeros enteros es:\n");
	printf("%d", c);
	return 0;
}
