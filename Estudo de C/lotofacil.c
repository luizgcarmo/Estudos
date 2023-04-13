#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

printf("\tNumeros para a Loto Facil  :\n\n");
int i;
srand(time(NULL));
for(i=0;i<15;i++){
  printf("\t- %d",rand()%25);
}

printf("\n\n\t-------- feito por Luiz Gustavo.-----------------\n\n\n");
  system("pause");
  return 0;
}
