#include<stdio.h>
#include<stdlib.h>

void calcular(int *a,int *b){
	*a=*a+*b;
}
int main(){
	int iA,iB;
	iA=9;
	iB=5;
	printf("\t Variavel 1 : %d \n\t Variavel 2 : %d\n",iA,iB);
	
	calcular(&iA,&iB);
	printf("\t Variavel 1 : %d \n\t Variavel 2 : %d\n",iA,iB);
	
	system("pause");
	return 0;
}
