#include<stdlib.h>
#include<stdio.h>


int main(){
	int a[10],b[10],c[10],i;
	
	printf("\tDigite 10 numeros inteiros para o lista A \n");
	for(i=0;i>=9;i++){
		scanf("%d",&a[i]);
	}
	printf("\tDigite 10 numeros inteiros para o lista B \n");
	for(i=0;i>=9;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i>=9;i++){
		c[i]=a[i]-b[i];
		printf("\t %d",c[i]);
	}
	
	
	system("pause");
	return 0;
}
