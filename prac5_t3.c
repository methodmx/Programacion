//LIBRERIAS
#include<stdio.h>
#include<conio.h>
#define MAX 10
//FUNCIONES
int main(){
    int opciones;
    int mayus;
    int i;
    char cadena[MAX];
    int vocales=0;
    int consonantes=0;
    int digitos=0;
    int repetir;
    printf("Ingrese un numero entero:");
        scanf("%s", cadena);
//DATOS DE LAS OPCIONES
    printf("1.Datos sobre la cadena");
    printf("\n2.Convertir a mayusculas");
    printf("\n3.Convertir a minisculas");
    printf("\n4.Salir del programa");
    printf("\nOpcion: ");
    scanf("%i",&opciones);
//“Datos sobre la cadena”: Imprimir cuantas vocales, consonantes y dígitos contiene la cadena.
    switch(opciones){
        case 1:;

        for(i=0; cadena[i]!='\x0' ; i++)
        {
            switch(cadena[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                vocales++;
            }
        }
        for(i=0; cadena[i]!='\x0' ; i++)
        {
            switch(cadena[i])
            {
                case 'b':
                case 'c':
                case 'd':
                case 'f':
                case 'g':
                case 'h':
                case 'j':
                case 'k':
                case 'l':
                case 'm':
                case 'p':
                case 'q':
                case 'r':
                case 's':
                case 't':
                case 'v':
                case 'w':
                case 'x':
                case 'y':
                case 'z':
                case 'B':
                case 'C':
                case 'D':
                case 'F':
                case 'G':
                case 'H':
                case 'J':
                case 'K':
                case 'L':
                case 'M':
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                case 'T':
                case 'V':
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                consonantes++;
            }
        }
        for(i=0; cadena[i]!='\x0' ; i++)
        {
            switch(cadena[i])
            {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                digitos++;
            }
        }

        printf("\nCaracteres: %d", i);
        printf("\nVocales: %d", vocales);
        printf("\nConsonantes: %d", consonantes);
        printf("\nDigitos: %d", digitos);

//“Convertir a mayúsculas”: convertir las letras minúsculas a mayúsculas.
        break;
        case 2:;
            char mayuscula   [] = "Ingrese la palabra a convertir a mayusculas: ";
            printf("\n%s",mayuscula);scanf("%s",cadena);
                for(i=0; i < MAX ; i++)
                if(cadena[i]>='a' && cadena[i]<='z')
                cadena[i]-=32;

                printf("%s", cadena);
//“Convertir a minúsculas”: convertir las letras mayúsculas a minúsculas
        break;
        case 3:;
            char minuscula   [] = "Ingrese la palabra a convertir a minusculas: ";
            printf("\n%s",minuscula);scanf("%s",cadena);
                for(i=0; i < MAX ; i++)
                if(cadena[i]>='A' && cadena[i]<='Z')
                cadena[i]+=32;

                printf("%s", cadena);
        break;
        case 4:
        break;

    }



}
