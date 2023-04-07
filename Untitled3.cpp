#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 5

typedef struct {
	int memoria[TAM];
	int topo;
}pilha;

void pilha_int(pilha *p){
	p->topo = 0;
} 

void empilha(pilha *p, int elemento){
	p->memoria [p->topo] = elemento;
	p->topo++;
}


void desempilha (pilha *p, int elemento){
    if(p->topo > 0)
	p->memoria [p->topo--];
}

int pilhe_topo (pilha *p, int eleme)

int main(){
	

	
return 0;
}
