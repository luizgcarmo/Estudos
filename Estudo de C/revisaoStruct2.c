#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char nome[60];
	int matricula;
	float nota1,nota2,nota3; // n1 = nota prova1.....
}Aluno;

void media(Aluno n[5]){
	int i;
	float med[5];   // med = media
	for(i=0;i<5;i++){
		med[i]=(n[i].nota1+n[i].nota2+n[i].nota3)/3;
		printf("\t %s  media : %f",n[i],med[i]);
		if(med[i]>=6){
			printf("\tAluno %s  Aprovado  %.1f\n",n[i].nome,med[i]);
		}else{
			printf("\tAluno %s Reprovado %.1f\n",n[i].nome,med[i]);
		}		
	}
}

int main(){
	Aluno aluno[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("\tDigite o nome do Aluno\n");
		scanf("%s",&aluno[i].nome);
		printf("\tDigite o numero de matricula do aluno \n");
		scanf("%d",&aluno[i].matricula);
		printf("\tDigite a nota 1 : \n");
		scanf("%f",&aluno[i].nota1);
		printf("\tDigite a nota 2 : \n");
		scanf("%f",&aluno[i].nota2);
		printf("\tDigite a nota 3 : \n");
		scanf("%f",&aluno[i].nota3);
	}
	
	media(aluno);
	
	system("pause");
	return 0;
}
