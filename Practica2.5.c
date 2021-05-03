#include<stdio.h>

int main()
{
    //Declaracion de variables
    float Perimetro, Area, Altura, Base;

    //Uso de variables
    printf("Ingrese la base del terreno:");
    scanf("%f", &Base);

    Base=(Base*3); Altura=(Base/3); Area=(Base*Altura); Perimetro=(Base+Altura+Base+Altura);

    printf("El perimetro es de: %.3f", Perimetro);
    printf("\nEl area es de: %.3f", Area);
}




