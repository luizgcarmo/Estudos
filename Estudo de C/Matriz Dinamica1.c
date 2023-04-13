#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// MATRIZ DINAMICA

int main(){
	float *mat;
	int i,j,n,m;
	
	
	printf("Enttre com o Numero de linhas: \n");
	scanf("%d",&m);
	printf("Entre com o Numero de Colunas : \n")
	scanf("%d",&n);
	
	mat = (float*)malloc(m*n*sizeof(float));
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			mat[i*n+j]=i+j;
			
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			if(j%n==0)
				printf("\n%.2f  - ",mat[i*n+j]);
			else
			printf("%.2f  - ",mat[i*n+j]);
		}
	return 0;
}
