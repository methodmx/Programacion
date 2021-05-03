#include<stdio.h>

int main()
{
    //Declaracion de variables
    int valor;
    float mitad;

    //Uso de variables
    //valor = 333;
    printf("Ingrese un numero entero:");
    scanf("%d", &valor);

    mitad = valor/2.0;

    printf("El valor es: %d y su mitad es %.2f", valor, mitad);

}
