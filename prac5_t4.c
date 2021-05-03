#include<stdio.h>

int main(){
    int a[4][4],b[4][4],c[4][4],x,y;
    printf("Primer matriz 2X3");
    for(x=1 ; x<=2 ; x++)
        for(y=1 ; y<=3 ; y++)
    {
        printf("\nIndtroducir valor de [%d][%d] : ",x,y);
        scanf("%d",&a[x][y]);
    }

    printf("Segunda matriz 3X3");
    for(x=1 ; x<=3 ; x++)
        for(y=1 ; y<=3 ; y++)
    {
        printf("\n Indtroducir valor de [%d][%d] : ",x,y);
        scanf("%d",&b[x][y]);
    }

    for(x=1 ; x<=2 ; x++)
        for(y=1 ; y<=3 ; y++)
            c[x][y]=(a[x][1]*b[1][y])+(a[x][2]*b[2][y])+(a[x][3]*b[3][y]);

    for(x=1 ; x<=2 ; x++)
    {
        for(y=1 ; y<=3 ; y++)
            printf(" %d ",c[x][y]);
        printf("\n");
    }

}
