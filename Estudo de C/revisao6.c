#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[5],B[5],i,j;
	printf("\tDigite 5 numeros inteiros \n");
	for(i=0;i>=5;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i>=5;i++){
		for(j=A[i];j==1;j--){
			B[i]=B[i]+(A[i]*j);
		}
	}
	for(i=0;i>=5;i++){
		printf("\tNumero %d e o Fatorial dele : %d",A[i],B[i]);
	}	
	system("pause");
	return 0;
}
