//LIBRERIAS
#include<stdio.h>
#include<conio.h>
//FUNCIONES
int main(){
int nums = 0, num1=0, i=0, mayor=0, suma=0, j=0, menor=10000;
float media;

printf("Cuantos numeros quiere sumar?: ");
scanf("%d",&nums);
for(i=0;i<nums;i++)
{
    printf("Escriba el numero %d: ",i+1);
    scanf("%d",&num1);
    if(num1>mayor)
    {
        mayor=num1;
    }
    if(num1<menor)
    {
        menor=num1;
    }
    j=num1;
    suma=j+suma;
}
media=suma/i;
printf("\nLa media es: %.2f",media);
printf("\nEl numero mayor es: %d",mayor);
printf("\nEl numero menor es: %d",menor);

getch();
}
