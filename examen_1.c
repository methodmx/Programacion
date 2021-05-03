#include<stdio.h>

int main()
{
    int n1,n2,cont=0,i,j;

    printf("Ingrese el primer numero: ");
    scanf("%d",&n1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&n2);

    for(i=n1;i<=n2;i=i+1){
        cont=0;
        for(j=1;j<=n2;j++){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
            printf("%d ",i);
        }
    }
    return 0;
}
