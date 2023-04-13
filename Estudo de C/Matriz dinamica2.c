#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// MATRIZ DINAMICA de vetores

int main(){
	float **mat;
	int i,j,n,m;
	// n= numero de colunas
	// m= numero de linhas
	// i = indice de linhas
	// j = indice de colunas
	// mat = ponteiro de dupla referencia que representa a matriz
	
	printf("Enttre com o Numero de linhas: \n");
	scanf("%d",&m);
	printf("Entre com o Numero de Colunas : \n")
	scanf("%d",&n);
	
	mat = (float**)malloc(m*sizeof(float*));
	for(i=0;i<m;i++){
		mat[i]=(float*)malloc(n*sizeof(float));
	}// criaçao da matriz dinamica com linhas como vetores

	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			mat[i][j]=i*j;
			
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			if(j%n==0)
				printf("\n%.2f  - ",mat[i][j]);
			else
			printf("%.2f  - ",mat[i][j]);
		}
	return 0;
}
