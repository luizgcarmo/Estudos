#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct listaC{
	int info;
	struct listaC *prox;
};
typedef struct listaC ListaC;

ListaC* inicializa(){
	return NULL;
}

ListaC* inserir(ListaC* L,int v){
	ListaC* novo, *aux=L;
	novo =(ListaC*)malloc(sizeof(ListaC));
	novo->info = v;	
	
	if(L==NULL)
		novo->prox = novo;
	else{
		novo->prox = L;
		while(aux->prox!=L){
			aux=aux->prox;
		}
		aux->prox=novo;
	}
	return novo;	
}
void imprimir(ListaC* L){
	ListaC *p=L;
	if(p==NULL)
		printf("\t Lista esta vazia");
	
	else{
		do{
			printf("\t %d - ",p->info);
			p=p->prox
		}while(p->prox!=L);
	}
}

int main(){
	ListaC *LC1, *LC2;
	
	LC1 = inicializa();
	LC2 = inicializa();
	
	LC1 = inserir(LC1,5);
	LC1 = inserir(LC1,6);
	LC1 = inserir(LC1,7);
	LC1 = inserir(LC1,8);
	
	imprimir(LC1);
		
	LC1 = retirar(LC1,6);// retirar o primeiro que encontrar
	
	excluirLista(LC1);  // Utilizar o free
	
	
	
	return 0;
}
