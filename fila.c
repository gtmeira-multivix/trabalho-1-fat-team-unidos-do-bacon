#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no {
	Token t;
	struct no *prox;
} No;
typedef struct fila {
	struct no *inicio;
	struct no *fim;
} Fila;

Fila* fila_criar() {
	Fila *f = (Fila*) malloc(sizeof(Fila));
	f->inicio = NULL;
	f->fim = NULL;
	return f;
}

void fila_adicionar(Fila *f, Token t) {
No *n = (No*) malloc(sizeof(No));
	n->t = t;
	n->prox = NULL;
	if(f->fim == NULL) {
		f->inicio = n;
		f->fim = n;
		return 0;
	}
	f->fim->prox = n;
	f->fim = n;
}

Token fila_remover(Fila *f) {
	if(f->inicio == NULL) {
		printf("Fila vazia!\n");
		return;
	}
	No *excluir = f->inicio;
	f->inicio = f->inicio->prox;
	if(f->inicio == NULL) {
		f->fim = NULL;
	}
	Token t = excluir->t;
	free(excluir);
	return t;
}

int fila_vazia(Fila *f) {
	if(f->inicio == NULL)
		return 1;
	else
		return 0;
	}

void fila_destruir(Fila *f) {
	if(!vazia(f)){
		No *proxNode,
			  *atual;

		atual = f->inicio;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}

void fila_imprimir(Fila *f) {
	if(vazia(f)){
		printf("Fila vazia!\n\n");
		return ;
	}

	No *tmp;
	tmp = f->inicio;
	printf("Fila :");
	while( tmp != NULL){
		token_imprimir(tmp->t);
		tmp = tmp->prox;
	}
	


	printf("\n\n");
}
