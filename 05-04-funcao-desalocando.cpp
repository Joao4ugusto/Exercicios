#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void vetor_encre(int v[], int n, int somador){
	for(int i = 0; i < n; i++){
		v[i] += somador;
	}
}

void printf_vetor(const int *v, int n){
	for(int i = 0; i < n; i++){
		printf("&v[%d] = %p | v[%d] = %d\n", i, &v[i], i, v[i]);
	}
}

void desaloca_vetor(int *v){
	free(v);
	v = NULL;
}

int main(){

int *vs = (int * ) calloc(5, sizeof(int));
for(int i = 0; i < 5; i++){
	vs[i] = i * 100;
}

vetor_encre(vs, 5, 2);
printf_vetor(vs, 5);


puts("===> ANTES DA FUNCAO DESALOCAR");
printf("&vs = %p | vs = %p\n", &vs, vs);


desaloca_vetor(vs);

return 0;
}

