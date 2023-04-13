#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, *pi;
	float fl, *pf;
	char c, *pc;
	
	pi=&i;
	pf=&fl;
	pc=&c;
	
	*pi=1;
	*pf=-10;
	*pc='B';
	
	printf("\t o Inteiro : %d \n\t o Real : %.2f \n\t o Char : %c\n",*pi,*pf,*pc);
	
	*pi=20;
	*pf=50.5;
	*pc='A';
	
	printf("\t o Inteiro : %d \n\t o Real : %.2f \n\t o Char : %c\n\n",*pi,*pf,*pc);
	
	
	
	system("pause");
	return 0;
}
