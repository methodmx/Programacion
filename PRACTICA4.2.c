/*Ejemplo de generador de números aleatorios*/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Programa que calcula todos los numeros de tres cifras tales que la suma de los cubos de las cifras es igual al valor del numero.\n\n");
    int i;
    int suma;
    for(i=100;i<=999;i++)
    {
        int a;
        int b;
        int c;
        a=i%100;
        b=(i/10)%10;
        c=i/100;
        suma= pow(a,3)+pow(b,3)+pow(c,3);
        if (suma==i)
        {
            printf("El numero de tres cifras que la suma de los cubos da el mismo valor es: %i",i);
        }
    }
    return 0;
}
