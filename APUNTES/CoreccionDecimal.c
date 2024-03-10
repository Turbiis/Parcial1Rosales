#include	<stdio.h>
#include	<stdlib.h>

float x,y,r;
main()
{
	system("cls");
	printf("Introduzca dos numeros punto decimal");
	scanf("%f", &x);
	scanf("%f", &y);
	
	r=x+y;
	printf("Los numeros que Ud. introdujo son: %f\n %f\n", x,y);
	system("pause");
	printf("La suma de %0.3f y %0.9f es igual a %0.6f", x,y,r);
	printf("\n");
	printf("El resultado es %0.0f", r);
}
