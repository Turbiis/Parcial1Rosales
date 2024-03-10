#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

double x, y, z, tF;
const double e = 2.7128 ;
const double k = 0.00267 ;

int main() {
    system("COLOR E3");
    system("cls");
    printf("Cuanto tiempo estuvo el material en el vaso de agua? (minutos):\n");
    scanf("%lf", &x);
    system("cls");
    printf("A que temperatura se encuentra el agua del vaso?:\n");
    scanf("%lf", &y);
    system("cls");
    printf("A que temperatura se encontraba el material?:\n");
    scanf("%lf", &z);
    system("cls");

    printf("Espere mientras se hace el calculo...");
    Sleep(2000);
    system("cls");

    x=x*1.000000000;
    y=y*1.000000000;
    z=z*1.000000000;

    tF = ((y + (z - y)) * exp(-k * x));

    printf("La temperatura final del material fue de %0.2lf C%c\n",tF,248);
    system("pause");

    return 0;
}