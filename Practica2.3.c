#include<stdio.h>

int main()
{
    //Declaracion de variables
    int D, H, M, S;

    //Uso de variables
    printf("Ingrese el dia: ");
    scanf("%d", &D);
    printf("Ingrese la hora: ");
    scanf("%d", &H);
    printf("Ingrese los minutos: ");
    scanf("%d", &M);
    printf("Ingrese los segundos: ");
    scanf("%d", &S);

    S=(D*86400 + H*3600 + M*60 + S);

    printf("La cantidad de segundos es de: %ld", S);

}

