#include<stdio.h>
#include<math.h>
int opciones;
int pi=3.1416;
int c;
int theta;
struct complejo{
    float real;
    float imaginaria;
    float real2;
    float imaginaria2;
    float suma1;
    float suma2;
    float resta1;
    float resta2;
    float multi1;
    float multi2;
    float divis1;
    float divis2;

};

int main(){

do  {
    //DATOS DE LAS OPCIONES
    printf("1.Captura de numero complejo");
    printf("\n2.Impresion del numero complejo en su forma rectangular");
    printf("\n3.Impresion del numero complejo en su forma polar");
    printf("\n4.Suma de numeros complejos");
    printf("\n5.Resta de numero complejos");
    printf("\n6.Multiplicacion de numero complejos");
    printf("\n7.Division de numero complejos");
    printf("\nOpcion: ");
    scanf("%i",&opciones);
    pi=3.1416;
    switch(opciones){
        case 1:;
        struct complejo numero;
        printf("Ingrese la parte real: ");
        scanf("%f", &numero.real);
        printf("Ingrese la parte imaginaria: ");
        scanf("%f", &numero.imaginaria);
        printf("Ingrese la segunda parte real: ");
        scanf("%f", &numero.real2);
        printf("Ingrese la segunda parte imaginaria: ");
        scanf("%f", &numero.imaginaria2);

        numero.suma1 = numero.real+numero.real2;
        numero.suma2 = numero.imaginaria+numero.imaginaria2;
        numero.resta1 = numero.real-numero.real2;
        numero.resta2 = numero.imaginaria-numero.imaginaria2;
        numero.multi1 = numero.real*numero.real2;
        numero.multi2 = numero.imaginaria*numero.imaginaria2;
        numero.divis1 = numero.real/numero.real2;
        numero.divis2 = numero.imaginaria/numero.imaginaria2;

        printf("\n\nCaptura Correcta\n",opciones);


        break;

        case 2:;

        break;
        case 3:;
        c=sqrt((numero.real*numero.real)+(numero.imaginaria*numero.imaginaria));
        theta=(180/pi)*(atan(numero.imaginaria/numero.real));
        printf("El valor en polar es: %2.f\n\n",c);
        break;

        case 4:;
        printf("\nLa suma es: %.2f,%.2fi\n\n", numero.suma1,numero.suma2);
        break;

        case 5:;
        printf("\nLa resta es: %.2f,%.2fi\n\n", numero.resta1,numero.resta2);
        break;
        case 6:;
        printf("\nLa multiplicacion es: %.2f,%.2fi\n\n", numero.multi1,numero.multi2);
        break;
        case 7:;
        printf("\nLa division es: %.2f,%.2fi\n\n", numero.divis1,numero.divis2);
        break;
        default:
            printf("Opcion incorrecta\n");
            break;
        }
    }while(opciones != 5);
}
