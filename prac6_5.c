//LIBRERIAS
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
//FUNCIONES
int main(){
    int opciones;
    int i=0;
    int numero=0;
    int a=0;
    int b=0;
    int digitos=1;
    int reversa=0;
    int suma_cifras=0;
    int resta=0;
    int primo=0;
    printf("Ingrese un numero entero:");
        scanf("%d", &numero);
//DATOS DE LAS OPCIONES
    printf("1.Reversa de un numero");
    printf("\n2.Cantidad de digitos de un numero");
    printf("\n3.Suma de sus cifras");
    printf("\n4.Es primo?");
    printf("\nOpcion: ");
    scanf("%i",&opciones);
//“Datos sobre la cadena”: Imprimir cuantas vocales, consonantes y dígitos contiene la cadena.
    switch(opciones){
        case 1:;

    while(numero != 0)
    {
       a = numero%10;
       b = numero/10;
       reversa = reversa*10+a;
       numero = b;
    }
    printf("El numero invertido es: %d",reversa);

//“Convertir a mayúsculas”: convertir las letras minúsculas a mayúsculas.
        break;
        case 2:;
        while(numero/10>0)
    {
        numero=numero/10;
        digitos++;
    }
    printf("Tiene %u digitos",digitos);

//“Convertir a minúsculas”: convertir las letras mayúsculas a minúsculas
        break;
        case 3:;
        while (numero != 0) {
        suma_cifras += numero % 10;
        numero /= 10;
        }
        {
            printf("La suma de los digitos del numero es : %d\n",suma_cifras);
        }
        break;
        case 4:
        if (numero==0||numero==1 )
        {
        printf("\nEl numero no es primo");
        }
        else{
        for(i=1;i<=numero;i++){
        if(numero%i==0){
        primo++;
        }
        }
        if(primo>2){
        printf("\nEl numero no es primo");
        }
        else{
        printf("\nEl numero es primo");
        }
        }
        break;

    }


}
