#ifndef _FILA_F
#define _FILA_H

#include "tokenizacao.h"

typedef struct no
{
	double info;
	struct no *prox;
} No;

typedef struct fila 
{
	struct no *inicio;
	struct no *fim;
} Fila;



Fila* fila_criar()
{
	Fila *f = (Fila*) malloc(sizeof(Fila));
	f->inicio = NULL;
	f->fim = NULL;
	return f;
}

void fila_adicionar(Fila *f, Token t)
{
No *n = (No*) malloc(sizeof(No));
	n->t = t;
	n->prox = NULL;
	if(f->fim == NULL) {
		f->inicio = n;
		f->fim = n;
		return;
	}
	f->fim->prox = n;
	f->fim = n;
}

Token fila_remover(Fila *f)
{
	if(f->inicio == NULL) {
		printf("Fila vazia!\n");
		return 0;
	}
	No *excluir = f->inicio;
	f->inicio = f->inicio->prox;
	if(f->inicio == NULL) {
		f->fim = NULL;
	}
	double t = excluir->t;
	free(excluir);
	return t;
}

int fila_vazia(Fila *f) 
{
	if(FILA->prox == NULL)
		return 1;
	else
		return 0;
	}

	node *aloca()
	{
		node *novo=(node *) malloc(sizeof(node));
		if(!novo){
			printf("Sem memoria disponivel!\n");
			exit(1);
		}else{
			printf("Novo elemento: "); scanf("%d", &novo->num);
			return novo;
		}
	}
	
}
void fila_destruir(Fila *f)
{
	if(!vazia(FILA)){
		node *proxNode,
			  *atual;

		atual = FILA->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}

void fila_imprimir(Fila *f)
{
	if(vazia(FILA)){
		printf("Fila vazia!\n\n");
		return ;
	}

	node *tmp;
	tmp = FILA->prox;
	printf("Fila :");
	while( tmp != NULL){
		printf("%5d", tmp->num);
		tmp = tmp->prox;
	}
	printf("\n        ");
	int count;
	for(count=0 ; count < tam ; count++)
		printf("  ^  ");
	printf("\nOrdem:");
	for(count=0 ; count < tam ; count++)
		printf("%5d", count+1);


	printf("\n\n");
}

#endif
