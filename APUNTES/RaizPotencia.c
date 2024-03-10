#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float a,b,x,y;
	float expo;
	printf("Introduzca un numero\n");
	scanf("%f", &a);
	printf("a que potencia lo desea elevar?\n");
	scanf("%f", &expo);
	b=pow (a,expo);
	printf("El numero %0.2f elevado a %0.2f es igual = %0.2f\n",a,expo,b);
	system("pause");
	system("cls");
	printf("Introduzca un numero para obtener su raiz cuadrada\n");
	scanf("%f", &x);
	y= sqrt(x);
	printf("La raiz cuadrada de %0.2f es %0.3f\n",x,y);
	system("pause");
}
