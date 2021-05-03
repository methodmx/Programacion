#include <stdio.h>
int main(void)
{
 //Declaracion de variables
    int h;
    int m;
    int s;
    printf("****\tPrograma que determina la hora\t****\n");
    printf("\nIntroduzca la hora : ");


    scanf("%d", &h);
    printf("\nIntroduzca los minutos : ");
    scanf("%d", &m);
    printf("\nIntroduzca los segundos : ");
    scanf("%d", &s);

    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 58 )
    {
    printf( "\n  Un segundo despues de la hora es: %d:%d:%d", h, m, s+1 );
    }
    else
     if ( h >= 0 && h <= 23 && m >= 0 && m <= 58 && s >= 0 && s ==59)
    {
        printf( "\n  Un segundo despues de la hora es: %d:%d:%d", h, m+1, s=0 );
    }
      else
            if ( h >= 0 && h <= 23 && m == 59 && s== 59)
    {
                printf( "\n  Un segundo despues de la hora es: %d horas", h+1,m,s );
    }
             else
                if ( h <= 0)
    {
                printf( "\n  Ingrese hora en formato correcto." );
    }
    {

        }
        return 0;
    }
