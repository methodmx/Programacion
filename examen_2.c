#include <stdio.h>
#include <math.h>


int main ()
{
    int tam, temp;
    float varianza=0.0, media=0.0, ds=0.0;
    printf("Dijita Tamaño del Vector: ");
    scanf("%d",tam);
    int vect[tam];

    for(int i=0; i<tam; i++)
    {
        printf("Digita el Dato"),i;
        scanf("%d",vect[i]);
    }
    printf("Mostrando el Vector");
    for(int i=0; i<tam; i++)
      {

      }
        for(int i=0;i<tam;i++)
         {
         media+=vect[i];
         }
        media=media/tam;
        for(int i=0;i<tam;i++)
            {
             varianza=varianza+pow((vect[i]-media),2);
            }
   ds=sqrt(varianza/(tam-1));
   printf("La media es: %d",media);
   printf("La desviacion estandar es: %d ",ds);
 return 0;
}
