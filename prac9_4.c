#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

// https://www.tutorialgateway.org/c-program-to-delete-duplicate-elements-from-an-array/
// https://stackoverflow.com/questions/64597278/dynamic-allocation-for-a-2d-array-results-in-memory-leak
typedef struct {
     int *array;
     int used;
     int size;
} Array ;

void initArray(Array *ptr, int initialSize)
{
     ptr->array = (int*) malloc( initialSize * sizeof(int) );
     ptr->used = 0;
     ptr->size = initialSize;
}

void insertArray(Array *ptr, int element)
{
     if(ptr->used == ptr->size)
     {
          ptr->size *= 2;
          ptr->array = realloc( ptr->array, ptr->size * sizeof(int) );
     }

     ptr->array[ptr->used++] = element;
}

void freeArray(Array *ptr)
{
     free(ptr->array);
     ptr->array = NULL;
     ptr->used = ptr->size = 0;
}

void eliminar_repetidos(int *ptr, int a_size, Array *b);

int main() {
    int ptr[] = {1,2,3,1,2,5,4,85,5,4,6,9,7};

    Array b;
    initArray(&b, 2);
    eliminar_repetidos(ptr, 10, &b);

    for(int i = 0; i < b.used; i++)
    {
        printf("%d \n",b.array[i]);
    }

    freeArray(&b);

    return 0;
}

void eliminar_repetidos(int *ptr, int a_size, Array *b)
{
    insertArray(b, ptr[0]);
    for(int i=0;i<a_size;i++)
    {
        for(int j=0;j<b->used;j++)
        {
            if( b->array[j] == ptr[i] )
            {
                break;
            }
            else if( j+1>=b->used )
            {
                insertArray(b,ptr[i]);
            }
        }
    }
}
