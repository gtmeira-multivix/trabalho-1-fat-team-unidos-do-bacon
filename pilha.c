#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no {
	Token token;
	struct no *prox;
	int num;
} No;

typedef struct pilha{
	Token *dados;
	int tamanho;
	int topo;
	No *primeiro;
	No *prox;
} Pilha;



Pilha* pilha_criar(int tamanho){
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	p->dados = (double*) malloc(tamanho*sizeof(double));
	p->tamanho = tamanho;
	return p;
}
	
void pilha_push(Pilha *p, Token t)
{

	if(p->topo >= p->tamanho) {
		printf("Pilha cheia!\n");
		return;
	}
	p->dados[p->topo] = t;
	p->topo++;
}

Token pilha_pop(Pilha *p){

	if(p->topo == 0) {
		printf("Pilha vazia!\n");
		Token t;
		return t;
	}
	p->topo--;
	return p->dados[p->topo];
}

Token pilha_primeiro(Pilha *p){
	
	return p->primeiro->token;
}
int pilha_vazia(Pilha *p){
	
	if(p->prox == NULL)
		return 1;
	else
		return 0;	
		
}
void pilha_destruir(Pilha *p){

	free(p->dados);
	free(p);
}
void pilha_imprimir(Pilha *p)
{
	int tam;
	if(pilha_vazia(p))
	{
		printf("PILHA vazia!\n\n");
	return ;
	}

	No *tmp;
	tmp = p->prox;
	printf("PILHA:");
	while( tmp != NULL)
	{
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
