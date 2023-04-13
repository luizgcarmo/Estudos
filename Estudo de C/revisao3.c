#include <stdio.h>
#include <stdlib.h>

int primo(int x){
	int i,j;
	for(i=2;i<=x/2;i++){
		if(x%i==0){
		return j=0;
		}else return j=1;
	}
	
}

int main(){
	int x;
	
	printf("\tDigite um numero para verificacao se eh um numero primo\n");
	scanf("%d",&x);
	int res = primo(x);
	
	if(res==1) printf("\tO numero Digitado %d , eh primo\n",x);
	else printf("\tO numero digitado %d , nao eh primo\n",x);
	

	system("pause");
	return 0;
}
