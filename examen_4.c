#include <stdio.h>
#include<conio.h>
int main(){
	int i=0;
	int c=0;
	int j=0;
	int k=0;
	char arreglo[15];
	printf("Introuce una palabra: ");
	scanf("%s",&arreglo);

	do{
		if (arreglo[i]==' '){
			k=i;
			do{
				arreglo[k]=arreglo[k+1];
				k++;
			}while(arreglo[k]!='\0');
		}
		i++;
	}while (arreglo[i]!='\0');
	k=0;
	j=0;
	i=i-1;
	while(arreglo[i]==arreglo[j]){
		i--;
		j++;

		if(i==0)
			c=1;
	}
	if (c==1)
		printf("Si es un palindromo");
	else
		printf("No es un palindromo");
return 0;
}
