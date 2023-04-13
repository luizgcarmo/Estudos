#include <stdio.h>
#include <stdlib.h>

void percentualGasto(float despesas[5]){
	int i,f;
	f=i;
	f++;
	float total, j[5];
	
	for(i=0;i<5;i++){
		total = total + despesas[i];
	}
	for(i=0;i<5;i++){
		j[i] = (total/despesas[i]);
		j[i]=j[i]*10;
		printf("\n\tPorcentagem de gastos do %d item , %.2f  ",f,j[i]);
		f++; 
	}
}



int main(){
	float desp[5];
	int i,j;
	j=i;
	
	printf("\tDigite a despesas da casa\n");
	for(i=0;i<5;i++){
		j++;
		printf("\tDigite a %d despesa\n",j);
		scanf("%f",&desp[i]);	
	}
	percentualGasto(desp);
	
	printf("\n");
	system("pause");
	return 0;
}
