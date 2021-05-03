#include<stdio.h>

int main()
{
    //Declaracion de variables
    float Cel, Far;

    //Uso de variables
    printf("Ingrese la temperatura en grados Centigrados:");
    scanf("%f", &Cel);

    Far=(Cel *9/5) +32;

    printf("La temperatura en grados Fahrenheit es de: %.4f", Far);

}

