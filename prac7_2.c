#include<stdio.h>
#include<stdlib.h>
int main(){

 struct numero {
    int numero1;
    int divisor1;
    int numero2;
    int divisor2;


}numero[1];
void capturar(){
    int i;
    for(i=0;i<1;i++){
        printf("\n\nIngresa el primer numero racional : ",i+1);
        scanf("%d",&numero[i].numero1);
        printf("Ingresa el divisor de primer numero racional: ",i+1);
        scanf("%d",&numero[i].divisor1);
        printf("Ingresa el segundo numero racional: ",i+1);
        scanf("%d",&numero[i].numero2);
        printf("Ingresa el segundo divisor del segundo numero: ",i+1);
        scanf("%d",&numero[i].divisor2);

    }
}
void mostrarTodos(){
    int i;
    printf("Mostrando los numero racionales\n");
    for(i=0;i<1;i++){
            printf("____________________________\n");
            printf("Primer racional: %d/%d\n",numero[i].numero1,numero[i].divisor1);
            printf("Segundo racional: %d/%d\n",numero[i].numero2,numero[i].divisor2);
    }
}
void suma(){
    int i;
    float sumas1;
    float sumas2;
    float divisor;
    float resultadosuma;

    printf("Suma de los numeros racionales\n");
    printf("____________________________\n");
    for(i=0;i<1;i++){
        {
            sumas1 = numero[i].numero1 * numero[i].divisor2;
            sumas2 = numero[i].numero2 * numero[i].divisor1;
            divisor = numero[i].divisor1 * numero[i].divisor2;
            resultadosuma = sumas1+sumas2;

            printf("El resultado de la suma de los numeros es: %.f/%.f\n",resultadosuma,divisor);
            }
    }
}
void resta(){
    int i;
    float resta1;
    float resta2;
    float divisor;
    float resultadoresta;

    printf("Resta de los numeros racionales\n");
    printf("____________________________\n");
    for(i=0;i<1;i++){
        {
            resta1 = numero[i].numero1 * numero[i].divisor2;
            resta2 = numero[i].numero2 * numero[i].divisor1;
            divisor = numero[i].divisor1 * numero[i].divisor2;
            resultadoresta = resta1-resta2;

            printf("El resultado de la resta de los numeros es: %.f/%.f\n",resultadoresta,divisor);
            }
    }
}
void multi(){
    int i;
    float multi1;
    float multi2;

    printf("Multiplicacion de los numeros racionales\n");
    printf("____________________________\n");
    for(i=0;i<1;i++){
        {
            multi1 = numero[i].numero1 * numero[i].divisor1;
            multi2 = numero[i].numero2 * numero[i].divisor2;

            printf("El resultado de la multiplicacion de los numeros es: %.f/%.f\n",multi1,multi2);
            }
    }
}
void division(){
    int i;
    float divi1;
    float divi2;

    printf("Division de los numeros racionales\n");
    printf("____________________________\n");
    for(i=0;i<1;i++){
        {
            divi1 = numero[i].numero1 * numero[i].divisor2;
            divi2 = numero[i].numero2 * numero[i].divisor1;

            printf("El resultado de la division de los numeros es: %.f/%.f\n",divi1,divi2);
            }
    }
}
void salir(){
    printf("Programa Finalizado\n");
}
void menu(){
    int opcion;
    do{
    printf("\n\nMenu de Opciones\n");
    printf("1. Captura de Numero racional\n");
    printf("2. Mostrar Numero racional\n");
    printf("3. Suma de numero racional\n");
    printf("4. Resta de numero racional\n");
    printf("5. Multiplicacion de numero racional\n");
    printf("6. Division de numero racional\n");
    printf("7. Salir\n");
    printf("Selecciona una Opcion:");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
            capturar();
        break;
        case 2:
            mostrarTodos();
        break;
        case 3:
            suma();
        break;
        case 4:
            resta();
        break;
        case 5:
            multi();
        break;
        case 6:
            division();
        break;
        case 7:
            salir();
        break;
        default:
        printf("Opcion Incorrecta\n");

    }
    }while(opcion!=7);
}

    menu();
    system("PAUSE");
    return 0;
}


