#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct listaD{
	struct listaD* ant;
	int info;
	struct listaD* prox;
};
typedef struct listaD ListaD;

ListaD* inicializar(){
	return NULL;
}

ListaD* inserirComeco(ListaD* L, int v){
	ListaD* novo;
	
	novo=(ListaD*)malloc(sizeof(ListaD));
	
	novo->ant=NULL;
	novo->info;
	novo->prox=L;
	
	if(L!=NULL)
		L->ant=novo;
	
	return novo;
}
void imprimir(ListaD* L){
	ListaD* p=L;
	
	while(p!=NULL){
		printf("\t %d - ",p->info);
		p=p->prox;
	}
	
}
int main(){
	ListaD *LD1;
	LD1 = inicializar();
	
	LD1 = inserirComeco(LD1,3);
	LD1 = inserirComeco(LD1,6);
	LD1 = inserirComeco(LD1,9);
	
	imprimir(LD1);
	
	return 0;
}
