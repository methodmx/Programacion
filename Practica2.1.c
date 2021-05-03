#include<stdio.h>

int main()
{
    //Declaracion de variables
    float Mil, Pul;

    //Uso de variables
    printf("Ingrese la cantidad de lluvia en pulgadas:");
    scanf("%f", &Mil);

    Pul=(Mil*25.4);

    printf("La cantidad de lluvia en milimetros es de: %.4f", Pul);

}


