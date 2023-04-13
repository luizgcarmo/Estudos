#include<stdio.h>
#include<stdlib.h>

void mudar(int *a,int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

int main(){
	int i,i2;
	i=9;
	i2=10;
	printf("\t Variavel 1 : %d \n\t Variavel 2 : %d\n",i,i2);
	mudar(&i,&i2);
	printf("\t Variavel 1 : %d \n\t Variavel 2 : %d\n\n",i,i2);	
	
	system("pause");
	return 0;
}
