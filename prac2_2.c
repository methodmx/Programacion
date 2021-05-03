#include<stdio.h>

int main()
{
    char nombre[20];
    int edad;
    char genero;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su genero: ");
    scanf(" %c", &genero);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Nombre del paciente: %s \n", nombre);
    printf("Genero: %c\n", genero);
    printf("Edad: %d", edad);

}
