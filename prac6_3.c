//LIBRERIAS
#include<stdio.h>
//FUNCIONES
int main(){
	int i;
	int n;
	long factorial=1;
	printf("Digite el numero del factorial que quiere saber: ");
	scanf("%i",&n);
	for(int i=1;i<=n;i++){
		factorial*=i;
		printf("%i*",i);
	}
	printf("=%llu",factorial);
	return 0;
}
