/*Programa que obtiene la tabla de multiplicar de un numero*/
#include<stdio.h>
#include <math.h>

int main()
{
	int a;
	int b=1;
	int c;
	
	printf("Escribe un numero para obtener su tabla de multiplicar: \t");
	scanf("%d", &a);
	
	while (b<=20)
	{
		c= a*b;
		printf("%d", a);
		printf("x");
		printf("%d", b);
		printf("=");
		printf("%d\n", c);
		b=b+1;
	}
	return 0;
}
