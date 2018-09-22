#ifndef _PILHA_H
#define _PILHA_H

#include "tokenizacao.h"


typedef struct pilha{
	double *dados;
	int tamanho;
	int topo;
} Pilha;

Pilha* pilha_criar(int tamanho){
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	p->dados = (double*) malloc(tamanho*sizeof(double));
	p->tamanho = tamanho;
	return p;
}
	
void pilha_push(Pilha *p, Token t){

	if(p->topo >= p->tamanho) {
		printf("Pilha cheia!\n");
		return;
	}
	p->dados[p->topo] = info;
	p->topo++;
}

Token pilha_pop(Pilha *p){

	if(p->topo == 0) {
		printf("Pilha vazia!\n");
		return 0;
	}
	p->topo--;
	return p->dados[p->topo];
}

Token pilha_primeiro(Pilha *p){
	
	return p->Pilha->Token;
}
int pilha_vazia(Pilha *p){
	
	if(Pilha->prox == NULL)
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
	if(vazia(Pilha))
	{
		printf("PILHA vazia!\n\n");
	return ;
	}

	node *tmp;
	tmp = Pilha->prox;
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

#endif
