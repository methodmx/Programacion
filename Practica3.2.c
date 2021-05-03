#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d;

    printf("\nPrograma para calcular las raices de una ecuacion de segundo grado\n");
    printf("Introduce el valor de a:");
    scanf("%f", &a);
    printf("Introduce el valor de b:");
    scanf("%f", &b);
    printf("Introduce el valor de c:");
    scanf("%f", &c);

    d=b*b-(4*a*c);
    if (d==0)
        printf("Raiz: %.2f\n", -b/(2*a));
    else if (d>0) {
        printf("Raiz 1: %.2f\n", (-b+sqrt(d))/(2*a));
        printf("Raiz 2: %.2f\n", (-b-sqrt(d))/(2*a));
    }
    else {
        printf("Raiz 1: %.2f+%.2f i\n",-b/(2*a),(sqrt(-d))/(2*a));
        printf("Raiz 2: %.2f-%.2f i\n",-b/(2*a),(sqrt(-d))/(2*a));
    }
    return 0;
}
