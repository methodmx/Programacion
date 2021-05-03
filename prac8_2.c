#include <stdio.h>
#include <stdlib.h>

float suma(float datos[],int n);
float maximo(float datos[],int n);
float minimo(float datos[],int n);
float media(float datos[],int n);
float mediana(float datos[], int n);
float moda(float datos[], int n);
void ordenar( float datos[], int n );
int filter(const void *a, const void *b);

int main(void)
{
float(*op[])(float[], int) = {suma,maximo,minimo,media,mediana,moda};

char nombres[][20] = {"suma","maximo","minimo","media","mediana","moda"};

    float datos[] = {5,7,80,48,5,6,80,7,23,80,7,6,7,4,7,40};
    int n = sizeof(datos)/sizeof(datos[0]);
    ordenar(datos,n);
    for(int i = 0; i < n ; i++ ){
        printf("%3d - %.2f\n\n",i,datos[i]);
    }
    for(int i = 0; i < 6 ; i++){
        printf(" %s:%.2f\n", nombres[i],op[i](datos, n));
    }
    return 0;
}
float suma(float datos[], int n)
{
    float s = 0;
    while(n--){ s += datos[n]; }
    return s;
}
float media(float datos[], int n)
{
    float sumatoria = suma(datos, n);
    float media = sumatoria / n;
    return media;
}

void ordenar(float datos[], int n)
{
    qsort(datos, n, sizeof(float), &filter);
}
int filter(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
float minimo( float datos[], int n )
{
    qsort(datos, n, sizeof(float), &filter);
    return datos[0];
}
float maximo( float datos[], int n  )
{
    qsort(datos, n, sizeof(float), &filter);
    return datos[n-1];
}
float mediana(float datos[], int n)
{
    qsort(datos, n, sizeof(float), &filter);
    return datos[n/2];
}
float moda(float datos[], int n)
{
    float
        a_ctrl = 0,
        a_frec = 0;
    float
        b_ctrl = 0,
        b_frec = 0;
    for(int i = 0;i<n;i++)
    {
        a_frec = 0;
        a_ctrl = datos[i];

        for(int j = 0;j<n;j++)
        {
            if(datos[j] == a_ctrl)
            {
                a_frec++;
            }
        }
        if(a_frec > b_frec)
        {
            b_ctrl = a_ctrl;
            b_frec = a_frec;
        }
    }
    return b_ctrl;
}
