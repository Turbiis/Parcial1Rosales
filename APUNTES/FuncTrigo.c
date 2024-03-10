#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	float a,b,c,angulo,conversion;
	printf("Programa que obtiene las funciones trigonom%ctricas de un angulo dado\n",130);
	printf("Introduzca el valor del angulo\n");
	scanf("%f", &angulo);
	conversion=(angulo * 3.1416)/180;
	a=sin(conversion);
	b=cos(conversion);
	c=tan(conversion);
	printf("	Angulo		seno		coseno		tangente		\n");
	printf("	%0.3f		%0.4f		%0.4f		%0.4f	\n",angulo,a,b,c);
	
	printf("\n");
	printf("\n");
	printf("\n");
	system("pause");
}
