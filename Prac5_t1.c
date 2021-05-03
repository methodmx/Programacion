#include<stdio.h>
#include<conio.h>

main()
{
    int i, arreglo[5];

    for(i=0; i<5; i++);
    {
        printf("Dame el valor del arreglo %d:\n",i+1);
        scanf("%d", &arreglo[i]);
    }

    return 0;

}
