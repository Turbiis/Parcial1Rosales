#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	int i,num;
	printf("Programa que muestra la funcion random sin inicializar\n");
	
	printf("%d \n", rand() );
	
	srand(time(NULL));
	system("pause");
	system("cls");
	
	printf("Numero aleatorio entre 0 y 50\n");
	num=rand()%51;
	printf("%d \n",num);
	system("pause");
	system("cls");
	
	printf("Numero aleatroio entre 1 y 100\n");
	num= 1+rand()%(101-1);
	printf("%d \n", num);
	system("pause");
	system("cls");
	
	printf("Numero aleatorio entre 250 y 420\n");
	num=250+rand()%(421-250);
	printf("%d \n", num);
	system("pause");
}
	
