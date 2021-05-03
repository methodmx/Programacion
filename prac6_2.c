//LIBRERIAS
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
//FUNCIONES
int main(){
    int opciones;
    int i=0;
    float hora1=0;
    float minuto1=0;
    float segundo1=0;
    float hora2=0;
    float minuto2=0;
    float segundo2=0;
    float h;
    float m;
    float s1;
    float s2;
    float m1;
    float m2;
    float h1;
    float h2;

    printf("Ingrese la hora inicial (H:M:S): ");
        scanf("%f:%f:%f", &hora1,&minuto1,&segundo1);
    printf("Ingrese la hora final (H:M:S): ");
        scanf("%f:%f:%f", &hora2,&minuto2,&segundo2);
//DATOS DE LAS OPCIONES
    printf("\n\nSeleccione formato de salida:");
    printf("\n1.Horas");
    printf("\n2.Minutos");
    printf("\n3.Segundos");
    printf("\nOpcion: ");
    scanf("%i",&opciones);
//“Convertir a horas
    switch(opciones){
        case 1:;
        h1=(hora1 + minuto1*0.0166667 + segundo1*0.000277778);
        h2=(hora2 + minuto2*0.0166667 + segundo2*0.000277778);


        printf("La diferencia en horas es de: %.2f horas", h2-h1);


//“Convertir la hora a minutos
        break;
        case 2:;
        m1=(hora1*60 + minuto1 + segundo1*0.0166667);
        m2=(hora2*60 + minuto2 + segundo2*0.0166667);


        printf("La diferencia en minutos es de: %.2f minutos", m2-m1);

//“Convertir la hora a segundos
        break;
        case 3:;

        s1=(hora1*3600 + minuto1*60 + segundo1);
        s2=(hora2*3600 + minuto2*60 + segundo2);


        printf("La diferencia en segundos es de: %.1f segundos", s2-s1);



        break;

    }


}
