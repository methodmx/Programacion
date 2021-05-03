#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

void buscarprimos(int limsuperior,int liminferior,int *primos);

int main() {

    int liminferior,
        limsuperior,
        primosencontrados = 0;

    int *primos = (int*) malloc( sizeof(int) );
    primos[0] = 2;
    printf("Ingrese el limite inferior: ");
    scanf("%d",&liminferior);
    printf("Ingrese el limite superior: ");
    scanf("%d",&limsuperior);

    for(int i=liminferior;i<=limsuperior;i++)
    {
        for(int j=2;j<i;j++)
        {
            if( i%j==0 )
            {
                break;
            }
            else if (j+1==i)
            {
                primosencontrados++;
                if((primos = (int*) realloc(primos, sizeof(int)*primosencontrados*2)) != NULL)
                {
                    primos[primosencontrados]=i;
                }
            }
        }
    }
    do{
        printf("%d\n",primos[primosencontrados]);
    }while(primosencontrados--);free(primos);
    return 0;
}
