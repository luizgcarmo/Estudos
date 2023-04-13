
#include "date.h"
#include<stdlib.h>
#include<stdio.h>
Date *d;

Date *createDate(int d, int m, int y){
	Date *D=(Date*)malloc(sizeof(Date));
	D->day = d;
	D->month = m;
	D->year = y;
	return D;
}
long year2Day(Date *D){
	return D->day*365;
}
long year2Month(Date *D){
	return D->month*12;
}
long day2Month(Date *D){
	return D->day/30;
}
long day2Year(Date *D){
	return D->day/365;
}
Date *readDate(){
	int d,m,y;
	printf("\tInforme o Dia : \n");
	scanf("%d",&d);
	printf("\tInforme o Mes : \n");
	scanf("%d",&m);
	printf("\tInforme o Ano : \n");
	scanf("%d",&y);
	return createDate(d,m,y);
}
void showDate(Date *D){
printf("\t Dia : %d \t-\t Mes : %d \t-\t Ano : %d \n",D->day,D->month,D->year);
}











