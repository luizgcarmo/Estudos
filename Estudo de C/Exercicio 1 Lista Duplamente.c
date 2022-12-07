#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int info;
    struct No* ant;
    struct No* prox;
}No;
typedef struct{
    No* inicio;
}Lista;

Lista* criar_Lista(){
    Lista* l = (Lista*)malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

Lista* vazio(Lista* l){
    return (l->inicio==NULL);
}

Lista* criar_No(int a){
    No* novo = (No*)malloc(sizeof(No));
    novo->info=a;
    novo->ant=NULL;
    novo->prox=NULL;
    return novo;
}
