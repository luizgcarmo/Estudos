#include<stdio.h>
#include<stdlib.h>

int conta(int x,int n){
	int res=0;
	if(n<0){
		n--;
		res=conta(x,n);
	}else{
		return res=(res+(x*x));
	}
	
}


int main (){
	int x,n,res;
	
	printf("\tDigite um numero inteiro\n");
	scanf("%d",&x);
	printf("\tDigite por quanto quer elevar : \n");
	scanf("%d",&n);
	
	res=conta(x,n);
	
	printf("\t Resultado : %d \n",res);
	
	system("pause");
	return 0;
}

