#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c; //lados del triangulo
    printf("Programa que calcula el area de un triangulo.\n");
    printf("Ingresa la longitud del lado 1: ");
    scanf("%f", &a);
    printf("Ingresa la longitud del lado 2: ");
    scanf("%f", &b);
    printf("Ingresa la longitud del lado 3: ");
    scanf("%f", &c);

    if(a==b && b==c)
    { printf("Se forma un triangulo equilatero"); }
    {
    if (a*a ==b*b && b*2!=c*c );
    }
    { printf("Se forma un triangulo rectangulo"); }
    if(a!=b && b!=c && c!=a)
    { printf("Es escaleno"); }

    float s = (a + b + c) / 2;//formula de semiperimetro
    float Area = sqrt(s * (s - a) * (s - b) * (s - c));//formula de heron

    printf("\nEl area del triangulo es: %.3f", Area);

    getch();
    return 0;
}
