#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int info;
    struct No* left;
    struct No* right;
    struct No* father;
} No;

typedef struct Arv{
    No* raiz;
}Arv;

No* makeTree(int v){
    No* n = (No*)malloc(sizeof(No));
    n->info=v;
    n->left = NULL;
    n->right= NULL;
    n->father = NULL;
    return n;
}
// funçoes auxiliares
int info(No* n){
    return n->info;
}
No* left(No* n){
    return n->left;
}
No* rigth(No* n){
    return n->right;
}
No* father(No* n){
    return n->father;
}
// fim das funçoes auxiliares.
int isLeft(No* n){
    if(father(n)==NULL)
        return 0;
    return left(father(n))== n;
}
int isRight(No* n){
    if(father(n)==NULL)
        return 0;
    return right(father(n)) == n;
}

No* brother(No* n){
    if(father(n)==NULL)
        return NULL;
    if(isLeft(n))
        return right(father(n));
    else 
        return left(father(n));
}

No* addLeft(No *arv, int v){
    return setNodeLeft(arv,makeTree(v));
}

No* addRight(No *arv , int v){
    return setNodeRight(arv,makeTree(v));
}

No* setNodeLeft(No *arv, No *n){
    arv->left= n;
    n->father= arv;
    return n;
}
No* setNodeRight(No *arv, No *n){
    arv->right=n;
    n->father=arv;
    return n;
}
void freeTree(No *n){
    if(n != NULL){
        No* pai = father(n);
        if(isLeft(n))
            pai->left = NULL;
        else if(isRight(n))
            pai->right = NULL;

        freeTree(left(n));
        freeTree(right(n));
        free(n);
    }
}
void preOrdem(No *n){
    if(n != NULL){
        printf("[%d]",info(n));
        preOrdem(left(n));
        preOrdem(right(n));
    }
}
void emOrdem(No *n){
    if(n != NULL){
        emOrdem(left(n));
        printf("[%d]",info(n));
        emOrdem(right(n));
    }
}
void posOrdem(No *n){
    if(n != NULL){
        posOrdem(left(n));
        posOrdem(right(n));
        printf("[%d]",info(n));
    }
}
No* searchTree(No *n, int v){
    if(n==NULL)
        return NULL;
    else if(v==info(n))
        return n;
    else{
        No* p = searchTree(left(n),v);
        if(p!=NULL)
            return p;
        else
            return searchTree(right(n), v);
    }
}

int isInTree(No *n, int v){
    if(n==NULL)
        return 0;
    else{
        if(v==info(n))
            return 1;
        else if(isInTree(left(n),v))
            return 1;
        else
            return isInTree(right(n),v);
    }
}