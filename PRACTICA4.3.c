#include<stdio.h>

int main(void)
{
    printf("Programa que muestra todos los numeros que la suma de sus numeros en orden impar es igual a la suma de sus numeros par.\n\nRESULTADOS:\n");
    //VARIABLES
    int a;
    int b;
    int c;
    int d;
    //CONDICIONES
    for(a=1;a<=9;a++)
    {
    for(b=0;b<=9;b++)
    {
    for(c=0;c<=9;c++)
    {
    for(d=0;d<=9;d++)
    {
    if((a+c) == (b+d))
    //IMPRESION
    printf("%d%d%d%d\,",a,b,c,d);
    }
    }
    }
    }
}
