#include <stdio.h>

int main(){
printf("Programa que muestra si un numero es primo o no.\n");
 int i, numero,cont=0;

 printf("Digite un numero: "); scanf("%i",&numero);
 if (numero==0||numero==1 )
 {
 printf("\nEl numero no es primo");
 }
 else{
 for(i=1;i<=numero;i++){
  if(numero%i==0){
   cont++;
  }
 }
 if(cont>2){
  printf("\nEl numero no es primo");
 }
 else{
  printf("\nEl numero es primo");
 }
 return 0;
}
}
