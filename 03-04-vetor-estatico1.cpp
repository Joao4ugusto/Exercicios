#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma_vetor(int v[], int n, int somador){
	for(int i = 0; i <  n; i++){
		v[i] += somador;
	}
}

void printf_vetor(int *v, int n){
		for(int i = 0; i <  n; i++){
		printf("&v[%d] = %p | v[%d] = %d\n", i, &v[i], i, v[i]);
	}
}

int main(){

//VETOR ESTATICO

int vs[5] = {0, 10, 20,30, 40};
puts("### VETOR ESTATICO ###");
printf_vetor(vs, 5);
soma_vetor(vs, 5, 9);
printf_vetor(vs, 5);

puts("\n\n### VETOR DINAMICO COM CALLOC ###");
int *vh = (int *) calloc(5, sizeof(int));
for(int i = 0; i < 5; i++){
	vh[i] = i * 100;
}

printf_vetor(vh, 5);
soma_vetor(vh, 5, 9);
printf_vetor(vh, 5);

// DESALOCAMENTO

free(vh);
vh = NULL;

return 0;
}

