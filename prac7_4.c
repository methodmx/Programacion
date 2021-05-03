#include<stdio.h>
#include<stdlib.h>
int main(){

 struct alumnos {
    int dia_i;
    int mes_i;
    int year_i;
    int dia_n;
    int mes_n;
    int year_n;
    long int matricula;
    char nombre[35];
    char apellido_paterno[35];
    char apellido_materno[35];
    float promedio;

}alumnos[2];
void capturar(){
    int i;
    for(i=0;i<2;i++){
        printf("\n\nIngresa la Matricula del Alumno #%d: ",i+1);
        scanf("%ld",&alumnos[i].matricula);
        fflush(stdin);
        printf("Ingresa el Nombre del Alumno #%d: ",i+1);
        scanf("%s",&alumnos[i].nombre);
        printf("Ingresa el Apellido paterno del Alumno #%d: ",i+1);
        scanf("%s",&alumnos[i].apellido_paterno);
        printf("Ingresa el Apellido materno del Alumno #%d: ",i+1);
        scanf("%s",&alumnos[i].apellido_materno);
        printf("Ingresa la Fecha de Ingreso del Alumno #%d 00/00/0000: ",i+1);
        scanf("%d/%d/%d",&alumnos[i].dia_i,&alumnos[i].mes_i,&alumnos[i].year_i);
        printf("Ingresa la Fecha de Nacimiento del Alumno #%d 00/00/0000: ",+1);
        scanf("%d/%d/%d",&alumnos[i].dia_n,&alumnos[i].mes_n,&alumnos[i].year_n);
        printf("Ingresa el Promedio del Alumno #%d: ",i+1);
        scanf("%f",&alumnos[i].promedio);
    }
}
void mostrarTodos(){
    int i;
    printf("Mostrando los datos de los Alumnos\n");
    for(i=0;i<2;i++){
            printf("____________________________\n");
            printf("Alumno #%d\n",i+1);
            printf("Matricula: %ld\n",alumnos[i].matricula);
            printf("Nombre: %s\n",alumnos[i].nombre);
            printf("Apellido paterno: %s\n",alumnos[i].apellido_paterno);
            printf("Apellido materno: %s\n",alumnos[i].apellido_materno);
            printf("Fecha de Ingreso: %d/%d/%d\n",alumnos[i].dia_i,alumnos[i].mes_i,alumnos[i].year_i);
            printf("Fecha de Nacimiento: %d/%d/%d\n",alumnos[i].dia_n,alumnos[i].mes_n,alumnos[i].year_n);
            printf("Promedio: %.2f\n",alumnos[i].promedio);
    }
}
void alumnosaprobados(){
    int i;
    printf("Mostrando los datos de los Alumnos Aprobados\n");
    for(i=0;i<2;i++){
            if(alumnos[i].promedio >= 6)
                printf("____________________________\n");
                printf("Alumno #%d\n",i+1);
                printf("Matricula: %ld\n",alumnos[i].matricula);
                printf("Nombre: %s\n",alumnos[i].nombre);
                printf("Apellido paterno: %s\n",alumnos[i].apellido_paterno);
                printf("Apellido materno: %s\n",alumnos[i].apellido_materno);
                printf("Fecha de Ingreso: %d/%d/%d\n",alumnos[i].dia_i,alumnos[i].mes_i,alumnos[i].year_i);
                printf("Fecha de Nacimiento: %d/%d/%d\n",alumnos[i].dia_n,alumnos[i].mes_n,alumnos[i].year_n);
                printf("Promedio: %.2f\n",alumnos[i].promedio);
    }
}
void alumnosreprobados(){
    int i;
    printf("Mostrando los datos de los Alumnos Aprobados\n");
    for(i=0;i<2;i++){
            if(alumnos[i].promedio < 6)
                printf("____________________________\n");
                printf("Alumno #%d\n",i+1);
                printf("Matricula: %ld\n",alumnos[i].matricula);
                printf("Nombre: %s\n",alumnos[i].nombre);
                printf("Apellido paterno: %s\n",alumnos[i].apellido_paterno);
                printf("Apellido materno: %s\n",alumnos[i].apellido_materno);
                printf("Fecha de Ingreso: %d/%d/%d\n",alumnos[i].dia_i,alumnos[i].mes_i,alumnos[i].year_i);
                printf("Fecha de Nacimiento: %d/%d/%d\n",alumnos[i].dia_n,alumnos[i].mes_n,alumnos[i].year_n);
                printf("Promedio: %.2f\n",alumnos[i].promedio);
    }
}
void promedioalumnos(){
    int i;
    float num;
    float prom;
    float suma;

    printf("Mostrando el Promedio de los Alumnos\n");
    printf("____________________________\n");
    for(i=0;i<1;i++){
        {
            suma = alumnos[0].promedio + alumnos[1].promedio;
            prom = suma/2;

            printf("El promedio es de: %.2f\n",prom);
            }
    }
}
void buscarMatricula(){
    int buscarM,i,encontradoM=0;
    printf("Ingresa la Matricula a Buscar: ");
    scanf("%d",&buscarM);
    for(i=0;i<2;i++){
        if(alumnos[i].matricula==buscarM){
            encontradoM=1;
            printf("\n\n____________________________\n");
            printf("Matricula: %ld\n",alumnos[i].matricula);
            printf("Nombre: %s\n",alumnos[i].nombre);
            printf("Apellido paterno: %d\n",alumnos[i].apellido_paterno);
            printf("Apellido materno: %d\n",alumnos[i].apellido_materno);
            printf("Fecha de Ingreso: %d/%d/%d\n",alumnos[i].dia_i,alumnos[i].mes_i,alumnos[i].year_i);
            printf("Fecha de Nacimiento: %d/%d/%d\n",alumnos[i].dia_n,alumnos[i].mes_n,alumnos[i].year_n);
            printf("Promedio: %.2f\n",alumnos[i].promedio);

        }
    }
    if(encontradoM==0){
        printf("No hay Alumnos con la matricula %d\n",buscarM);
    }
}
void buscarNombreApellidos(){
    int i,encontradoN=0;
    char buscarN[35];
    printf("Ingresa el Nombre o Apellido a Buscar: ");
    scanf("%s",&buscarN);
    for(i=0;i<2;i++){
        if (alumnos[i].nombre==buscarN || alumnos[i].apellido_paterno==buscarN){
            encontradoN=1;
            printf("\n\n____________________________\n");
            printf("Matricula: %ld\n",alumnos[i].matricula);
            printf("Nombre: %s\n",alumnos[i].nombre);
            printf("Apellido paterno: %d\n",alumnos[i].apellido_paterno);
            printf("Apellido materno: %d\n",alumnos[i].apellido_materno);
            printf("Fecha de Ingreso: %d/%d/%d\n",alumnos[i].dia_i,alumnos[i].mes_i,alumnos[i].year_i);
            printf("Fecha de Nacimiento: %d/%d/%d\n",alumnos[i].dia_n,alumnos[i].mes_n,alumnos[i].year_n);
            printf("Promedio: %.2f\n",alumnos[i].promedio);

        }
    }
    if(encontradoN==0){
        printf("No hay Alumnos con ese Nombre o Apellido %s\n",buscarN);
    }
}
void salir(){
    printf("Programa Finalizado\n");
}
void menu(){
    int opcion;
    do{
    printf("\n\nMenu de Opciones\n");
    printf("1. Captura de Alumnos\n");
    printf("2. Mostrar Alumnos\n");
    printf("3. Calcular el promedio de los alumnos registrados\n");
    printf("4. Mostrar alumnos aprobados\n");
    printf("5. Mostrar alumnos no aprobados\n");
    printf("6. Busqueda de alumno por matricula\n");
    printf("7. Busqueda de alumno por nombre o apellidos\n");
    printf("8. Salir\n");
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
            promedioalumnos();
        break;
        case 4:
            alumnosaprobados();
        break;
        case 5:
            alumnosreprobados();
        break;
        case 6:
            buscarMatricula();
        break;
        case 7:
            buscarNombreApellidos();
        break;
        case 8:

        break;
        default:
        printf("Opcion Incorrecta\n");

    }
    }while(opcion!=8);
}

    menu();
    system("PAUSE");
    return 0;
}







