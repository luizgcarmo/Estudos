#include<stdio.h>
#include<stdlib.h>


typedef struct{
  char nome[100];
  int idade;
  char email[100];
}pessoa;


void apresentar(pessoa p1){
	printf("\tO nome :  %s\n",p1.nome);
	printf("\tA Idade : %d\n",p1.idade);
	printf("\tO Email : %s\n",p1.email);
}


int main(){

pessoa p1;

printf("\tDigite o nome da pessoa : \n");
scanf("%[^\n]s",&p1.nome);
printf("\tDigite a Idade da pessoa : \n");
scanf("%d",&p1.idade);
fflush(stdin);
printf("\tDigite o email da pessoa : \n");
scanf("%[^\n]s",&p1.email);

apresentar(p1);

  system("pause");
  return 0;
}
