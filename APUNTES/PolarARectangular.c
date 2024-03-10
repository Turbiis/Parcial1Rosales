#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	const float pi=3.1416;
	float x,y,c,angulo,conversion;
	printf("Introduzca el valor del radio vector\n");
	scanf("%f",&c);
	printf("Introduzca el valor del angulo de apertura\n");
	scanf("%f",&angulo);
	conversion=(angulo*pi)/180;
	x=c*cos(conversion);
	y=c*sin(conversion);
	printf("Los valores para \n x=%f \n y=%f \n",x,y);
	system("pause");
}
