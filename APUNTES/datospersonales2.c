#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[40], apellido[40], boleta[15];
    int edad, fecha;

    printf("Ingrese su nombre\n");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0'; // Elimina el salto de línea al final

    printf("Ingrese su apellido\n");
    fgets(apellido, sizeof(apellido), stdin);
    apellido[strcspn(apellido, "\n")] = '\0'; // Elimina el salto de línea al final

    printf("Ingrese su boleta\n");
    fgets(boleta, sizeof(boleta), stdin);
    boleta[strcspn(boleta, "\n")] = '\0'; // Elimina el salto de línea al final

    system("cls");

    // Concatenar nombre y apellido
    char nombreCompleto[80];
    snprintf(nombreCompleto, sizeof(nombreCompleto), "%s %s", nombre, apellido);

    printf("%s\t\t\t\t\t\t%s\n", nombreCompleto, boleta);
    system("pause");

    system("cls");
    printf("Introduce el a%co en el que naciste: ",164);
    scanf("%d", &fecha);
    edad = 2024 - fecha;
    printf("Tu edad es %d\n", edad);

    return 0;
}

