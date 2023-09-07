 /*Programa que imprime 10 numeros */

#include <stdio.h>
#include <math.h>

int main ()
{
	int n;
	int a=1;
	printf("Escribe un numero: \t");
	scanf("%d", &n);
	
    while (a<=10)
	{
	 n=n+1;
   	 printf("%d\n", n);
	 a=a+1;
	
    }
	
	return 0;
}
