#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

printf("\tNumeros para a megasena  :\n\n");
int i;
srand(time(NULL));
for(i=0;i<6;i++){
  printf("\t - %d",rand()%60);
}

printf("\n\n\t-------- feito por Luiz Gustavo.-----------------\n\n\n");
  system("pause");
  return 0;
}
