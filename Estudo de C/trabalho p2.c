#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifdef __linux__
    #include<unistd.h>
#elif _WIN32
    #include<windows.h>
#else

#endif

///////////////////////// fim de includes   /////////////////////////

typedef struct No{
    int dia;
    int mes;
    int ano;
    int tele;
    char nome[100];
    char email[50];
    struct No * prox;
}No;

typedef struct Lista{
    No *inicio;
}Lista;

Lista* criarLista(){
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

int listaVazia(Lista *l){
    return (l->inicio==NULL);
}
void clear_screen(){
    #ifdef __linux__
        system("clear");
    #elif _WIN32
        system("cls");
    #else

    #endif
}

No* criarNo(int d, int m, int a,int tele, char nome[100],char ema[50]){
    No *n = (No*)malloc(sizeof(No));
    n->ano = a;
    n->dia = d;
    n->mes = m;
    strcpy(n->nome,nome);
    n->tele = tele;
    strcpy(n->email,ema);
    n->prox = NULL;
    return n;
}

void printInfo(No *n){
    printf("\tNome  : %s \n",n->nome);
    printf("\tEmail : %s \n",n->email);
    printf("\tTelefone : %d \n",n->tele);
    printf("\tNascimento : %d/%d/%d \n",n->dia,n->mes,n->ano);
}

No* retorna_pos(Lista *l,int pos){
    int i;
    No *aux;
    if(pos<0 || pos>=tamanho(l)){
        return NULL;
    }
    aux = l->inicio;
    while(i==pos){
        aux=aux->prox;
        i++;
    }
    return aux;
}

void deletar(No *ant){
    No *aux = ant->prox;
    if(aux==NULL){
        printf("\t Contato Inexistente\n");
        return;
    }else{
        ant->prox = aux->prox;
        free(aux);
    }
}

int tamanho(Lista *l){
    int tam = 0;
    No* aux = l->inicio;
    while(aux!=NULL){
        tam++;
        aux=aux->prox;
    }
    return tam;
}

void mostraLista(Lista *l){
	clear_screen();
    No *aux = l->inicio;
    int pos=0;
    if(listaVazia(l)){
        printf("Lista Vazia !!!\n");
        return;
    }
    while(aux!=NULL){
        printf("Posicao %d \n",pos);
        printInfo(aux);
        aux=aux->prox;
        pos++;
        }
    
}
/*void inserir_ordenado(Lista *l, int v){
    No* ant = NULL;
    No* p = l->inicio;

    while(p!=NULL && p->info < v){
        ant = p;
        p=p->prox;
    }

    No *novo = criar_no(v);
    if(ant==NULL){
        novo->prox = l->inicio;
        l->inicio = novo;
    }else{
        novo->prox = ant->prox;
        ant->prox = novo;
    }
}*/

No* addNovoNo(Lista *l){
    fflush(stdin);
	No *novo;
    char nome[100];
    char email[50];
    int dia;
    int mes;
    int ano;
    int telefone;
    printf("\t Digite o nome :\n");
    fgets(nome,100,stdin);
    printf("\tDigite o email : \n");
    fgets(email,50,stdin);
    printf("\tDigite o Dia de nacimento : \n");
    scanf("%d",&dia);
    printf("\tDigite o Mes de nacimento : \n");
    scanf("%d",&mes);
    printf("\tDigite o Ano de nacimento : \n");
    scanf("%d",&ano);
    printf("\tDigite o telefone : \n");
    scanf("%d",&telefone);
    novo = criarNo(dia,mes,ano,telefone,nome,email);
    
    if(listaVazia(l)){
        l->inicio = novo;
    }else if((strcmp(l->inicio->prox->nome,novo->nome)<0)){ 
        novo = l->inicio->prox;
        l->inicio = novo;
    }else{
        No *aux = l->inicio;
        No *ant = NULL;
        while(aux!=NULL && strcmp(aux->nome,novo->nome)<0){
            ant=aux;
            aux = aux->prox;            
        }if(aux->prox!=NULL){
            aux->prox=novo;
        }else{
            ant->prox = novo;
            novo->prox = aux;
        }
    }
    return novo;
}

No* buscarContato_nome(Lista *l,char nome[100]){
    No *aux = l->inicio;
    int i=0;
    if(listaVazia(l)){
        printf("Lista de contatos Vazia !!!!!\n");
        return NULL;
    }else{
        while(strcmp(aux->nome,nome)!=0){
            if(aux->prox != NULL){
                aux=aux->prox;
            }else if(aux==NULL || i>=tamanho(l) ){
                printf("\tContato NAO encontrado !!!");
                break;
            }
                        
        }
        printInfo(aux);
        return aux;
    }

}

No* buscarContato_pos(Lista *l, int pos){
    No *aux = l->inicio;
    int posL=0;
    if(listaVazia(l)){
        printf("\tLista de contatos VAZIA !!!!\n");
        return NULL;
    }else{
        while(posL!=pos){
            if(aux->prox!=NULL){
                aux = aux->prox;
            }else if(aux->prox==NULL){
                printf("\tContato nao encontrado");
            }else{
            	printInfo(aux);
                return aux;
            }
            
        }
    }
}

void excluirContato_nome(Lista *l, char nome[100]){
    No *aux = l->inicio;
    if(listaVazia(l)){
        printf("\tLista Vazia!!!");
        return;
    }else{
        while(strcmp(aux->nome,nome)!=0){
            if(aux->prox==NULL){
                printf("\tContato NAO encontrado!!!\n");
                return;
            }
            if(strcmp(aux->nome,nome)==0){
                deletar(aux);
                return;
            }
            else{
                aux = aux->prox;
            }
        }
    }
}

void excluirContato_pos(Lista *l, int pos){
    No *aux = l->inicio;
    if(aux==NULL){
        printf("\tLista vazia!!!!\n");
        return;
    }else if(pos==0){
        l->inicio = aux->prox;
        free(aux);
        return;
    }else{
        if(pos<0 || pos>=tamanho(l)){
            printf("\tPosicao invalida!!!");
            return;
        }else{
            deletar(retorna_pos(l,pos));
        }
    }
}

void menuPrincipal(Lista *l){
    int esc;
    No *aux = l->inicio;
    printf("\t*********************************\n");
    printf("\t*                               *\n");
    printf("\t*     BEM VINDO A SUA AGENDA    *\n");
    printf("\t*                               *\n");
    printf("\t*   1 - Adicionar Contato.      *\n");
    printf("\t*   2 - Mostrar Contatos.       *\n");
    printf("\t*   3 - Buscar Contato.         *\n");
    printf("\t*   4 - Excluir Contato.        *\n");
    printf("\t*   5 - Sair.                   *\n");
    printf("\t*                               *\n");
    printf("\t*********************************\n");
    scanf("%d",&esc);
    fflush(stdin);
    
    switch (esc)
    {
    case 1:    	
    	if(listaVazia(l)){
			l->inicio = addNovoNo(l);
			menuPrincipal(l);
		}else if(tamanho(l)>2){
			while(strcmp(aux->nome,l->inicio->nome)>=0){
				aux=aux->prox;
			}
			aux=addNovoNo(l);
			menuPrincipal(l);
		}else{
			aux=aux->prox;
			aux=addNovoNo(l);
			menuPrincipal(l);				
		}
		break;        
    case 2:
        mostraLista(l);
        menuPrincipal(l);
        break;
    case 3:
        menuBusca(l);
        menuPrincipal(l);
        break;
    case 4:
        menuExcluir(l);
        menuPrincipal(l);
        break;
    case 5:
        return;
    default:
        printf("Valor Invalido!!!!");
        clear_screen();
        menuPrincipal(l);
    }
    
}

void menuBusca(Lista *l){
    clear_screen();
    
    int esc, pos;
    char nome[100];
    printf("\t*********************************\n");
    printf("\t*                               *\n");
    printf("\t*       OPCOES DE BUSCA         *\n");
    printf("\t*                               *\n");
    printf("\t*   1 - Por Nome.               *\n");
    printf("\t*   2 - Por Posicao.            *\n");
    printf("\t*   5 - Sair.                   *\n");
    printf("\t*                               *\n");
    printf("\t*********************************\n");
    scanf("%d",&esc);
	fflush(stdin);
	
    switch (esc)
    {
    case 1:
        printf("\tDigite o nome : \n");
        fgets(nome,100,stdin);
        buscarContato_nome(l,nome);
        break;
    case 2:
        printf("\tDigite a posicao do Contato : \n");
        scanf("%d",&pos);
        buscarContato_pos(l,pos);
        break;
    case 5:
        return;
        break;
    default:
        printf("\tValor invalido!!!");
        menuBusca(l);
        break;
    }

}

void menuExcluir(Lista *l){
    clear_screen();
    
    int esc, pos;
    char nome[100];
    printf("\t*********************************\n");
    printf("\t*                               *\n");
    printf("\t*       OPCOES DE EXCLUIR       *\n");
    printf("\t*                               *\n");
    printf("\t*   1 - Por Nome.               *\n");
    printf("\t*   2 - Por Posicao.            *\n");
    printf("\t*   5 - Sair.                   *\n");
    printf("\t*                               *\n");
    printf("\t*********************************\n");
    scanf("%d",&esc);
	fflush(stdin);
	
    switch (esc)
    {
    case 1:
        printf("\tDigite o Nome : \n");
        fgets(nome,100,stdin);
		excluirContato_nome(l,nome);
        break;
    case 2:
        printf("\tDigite a posicao : \n");
        scanf("%d",&pos);
		excluirContato_pos(l,pos);
        break;
    case 5:
        return;
    default:
        printf("\tValor invalido!!!");
        menuExcluir(l);
    }
}



int main(){
    menuPrincipal(criarLista());

    return 0;
}