#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

main()
{
	char nombre[40],apellido[40],boleta[15];
	int edad,fecha;
	
	printf("ingrese su nombre\n");
	scanf("%s",&nombre);
	gets(nombre);
	
	printf("ingrese su apellido\n");
	scanf("%s",&apellido);
	gets(apellido);
	
	printf("ingrese su boleta\n");
	scanf("%s",&boleta);
	gets(boleta);
	system("cls");
	printf("%s%s\t\t\t\t\t\t%s\n",nombre,apellido,boleta);
	system("pause");
	
	system("cls");
	printf("introduce el año en el que naciste");
	scanf("%d",&fecha);
	edad=2024-fecha;
	printf("tu edad es	%d \n",edad);
	system("pause");
}
