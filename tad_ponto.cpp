#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int x, y;	
} ponto;


void setx (ponto *p, int v) {
	p->x = v;
}

void sety (ponto *p, int v){
	p->y = v;
}

int getx (ponto *p){
	return p->x;
}

int gety (ponto *p){
	return p->y;
}


float distancia_ponto (ponto *a, ponto *b) 


int main(){

 ponto p1, p2;
 
 int a,  b;
 scanf("%d", &a);
 scanf("%d", &b);
 
 setx (&p1, a);
 sety (&p2, b);
 
   

return 0;
}

