#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

// https://stackoverflow.com/questions/64597278/dynamic-allocation-for-a-2d-array-results-in-memory-leak
typedef struct {
     int *array;
     int used;
     int size;
} Array ;

void initArray(Array *a, int initialSize)
{
     a->array = (int*) malloc( initialSize * sizeof(int) );
     a->used = 0;
     a->size = initialSize;
}

void insertArray(Array *a, int element)
{
     if(a->used == a->size)
     {
          a->size *= 2;
          a->array = realloc( a->array, a->size * sizeof(int) );
     }

     a->array[a->used++] = element;
}

void freeArray(Array *a)
{
     free(a->array);
     a->array = NULL;
     a->used = a->size = 0;
}

float pol(Array *coef, float x);

int main() {

    int tamanocoef = 0,captura;

    float num_eval;Array eq;

    printf("Numero de coeficientes: ");
    scanf("%d", &tamanocoef);

    initArray(&eq, tamanocoef);

    while(tamanocoef--)
    {
        printf("Coeficiente del exponente %d: ",tamanocoef);
        scanf("%d", &captura);
        insertArray(&eq,captura);
    }

    printf("Numero a evaluar:");
    scanf("%f",&num_eval);

    pol(&eq, num_eval);freeArray(&eq);
    return 0;
}

float pol(Array *coef , float x)
{
    float result = 0;
    for(int i=0;i<coef->used;i++)
    {
        result = result * x + (float)coef->array[i];
    }
    printf("%.2f\n",result);
    return 0;
}
