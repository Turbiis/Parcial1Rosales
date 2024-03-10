#include <windows.h>

int a,b;

main()
{
	printf("Introduzca un numero entero\n");
	scanf("%d", &a);
	printf("Introduzca otro numero entero");
	scanf("%d", &b);
	printf("Operadores relacionales\n");
	printf(" a <  b  =  %d\n",a<b);
	printf(" a <=  b  =  %d\n",a<=b);
	printf(" a ==  b  =  %d\n",a==b);
	printf(" a >  b  =  %d\n",a>b);
	printf(" a =>  b  =  %d\n",a>=b);
	
	Sleep(5000);
	
	printf("Operadores Logicos\n");
	printf(" a && b  =  %d\n",a&&b);
	printf(" a ||  b  =  %d\n",a||b);
	printf(" a |  b  =  %d\n",a|b);
	system("pause");
}
