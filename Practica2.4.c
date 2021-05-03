#include<stdio.h>

int main()
{
    //Declaracion de variables
    float MM, KG;

    //Uso de variables
    printf("Ingrese el peso del perro en kilogramos:");
    scanf("%f", &MM);

    KG=(MM*12.5);

    printf("La cantidad de antibiotico necesaria es de: %.2fmm", KG);

}



