#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	float a,b;
	int c,d,e;
	printf("Conversion de decmal a notacion cientifica y viceversa\n");
	printf("Introduce un numero con decimal \n");
	scanf("%f",&a);
	printf("El numero %f, en notacion cientifica es %e\n", a,a);
	system("pause");
	system("cls");
	printf("Introduzca el numero en notacion cientifica");
	scanf("%e", &b);
	printf("El numero %e, en notacion decimal es %f\n",b,b);
	system("pause");
	system("cls");
	printf("Conversion de un enterio a Hexadecimal\n");
	printf("Introduzca un numero entero decimal\n");
	scanf("%d", &c);
	printf("El numero %d en Hexadecimal es %X\n", c,c);
	system("pause");
	system("cls");
	printf("Conversion de un entero a octal");
	printf("Introduzca un numero entero decimal\n");
	scanf("%d", &d);
	printf("El numero %d en octal es %o\n", d, d);
	system("pause");
	system("cls");
	printf("Conversion de entero a caracter\n");
	printf("Introduzca un numero entero decimal\n");
	scanf("%d", &e);
	printf("El numero %d en caracter es %c\n", e, e);
	getche();
	printf("\n");
	printf("\n");
}
