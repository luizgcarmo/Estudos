#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

// Lista encadeada

struct lista{
	int info;
	struct lista* prox; // ponteira aponta para a proxima lista
};
typedef struct lista Lista;

Lista* inicializa(){
	return NULL;
}

int main(){
	Lista *L1, *L2;
	
	//L1= inicializa();
	L2 = (Lista*)malloc(sizeof(Lista));
	L1 = (Lista*)malloc(sizeof(Lista));// Nó 
	L1->info = 5;
	L1->prox = L2;
	L2->prox = NULL;
	L2->info = 6;
	return 0;
}
