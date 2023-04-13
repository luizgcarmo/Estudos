#include<stdio.h>
#include<stdlib.h>

int calcular(int *A, int *B){
	int *c;
	c=(int*)malloc(10*sizeof(int));
	int i;
	for(i=0;i<10;i++){
		*c=*A-*B;
		c++;
		A++;
		B++;
	}
	

	return *c;
}
void mostrar(int *C){
	int i;
	for(i=0;i<10;i++){
		printf("\t %d \n",*C);
		C++;
	}
}
void incremento(int *a,int *b){
	a[0]=0;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	a[4]=4;
	a[5]=5;
	a[6]=6;
	a[7]=7;
	a[8]=8;
	a[9]=9;
	a[10]=10;
	b[0]=100;
	b[1]=9;
	b[2]=8;
	b[3]=8;
	b[4]=6;
	b[5]=5;
	b[6]=4;
	b[7]=3;
	b[8]=2;
	b[9]=1;
	b[10]=10;
}

int main(){
	int *a;
	int *b;
	int *c;
	a=(int*)malloc(10*sizeof(int));
	b=(int*)malloc(10*sizeof(int));
	c=(int*)malloc(10*sizeof(int));
	fflush(stdin);
	
	incremento(a,b);
	*c=calcular(a,b);
	mostrar(c);
	system("pause");
	return 0;
}
