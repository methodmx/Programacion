#include<stdio.h>
#include<math.h>
float mycos(float x,int i);
int factorial(int n);
float aproximacion(int n,float x);

float mycos(float x,int i){
    int k;
    float pot=1;
    for(k=1;k<=i;k++)
    pot=pot*x;
    return pot;
     }

   int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
    }

    float aproximacion(int n,float x){
    int i;
    float suma=0;
    for(i=0;i<=n;i++)
        suma = suma + mycos(x,i)/factorial(i);
    return suma;
    }

    main(){
        int n;
        int e;
        float x;
        printf("Ingresa el valor de n y x\n");
        scanf("%d %f",&n,&x);
        printf("El valor de Taylor para n=%d y x=%.0f es %f\n",n,x,aproximacion(n,x));
        e=n-x;
        printf("El error de los valores obtenidos: %d",e);
    }


