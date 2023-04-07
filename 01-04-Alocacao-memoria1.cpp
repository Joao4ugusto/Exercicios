#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

// Aloca��o de mem�ria estatica
int vs[5] = {0,10,20,30,40};

puts("### VETOR ESTATICO ###");
printf("&vs = %p | vs = %d\n\n", &vs, vs);

for(int i = 0; i < 5; i++){
	printf("&vs[%d] = %p | vs[%d] = %d\n", i, &vs[i], i, vs[i]);
}

// Aloca��o de mem�ria Dinamica
int *vh_mal = (int *) malloc(5 * sizeof(int)); // Com malloc todos elementos tem lixo de mem�ria

puts("\n\n### VETOR DINAMICO MALLOC ###");
printf("&vh_mal = %p | vh_mal = %p\n\n", &vh_mal, vh_mal);

for(int i = 0; i < 5; i++){
	printf("&vh_mal[%d] = %p | vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
}


// Aloca��o de mem�ria Dinamica
int *vh_Cal = (int *) calloc(5, sizeof(int)); // Com Calloc todos elementos tem lixo de mem�ria

puts("\n\n### VETOR DINAMICO CALLOC ###");
printf("&vh_Cal = %p | vh_Cal = %p\n\n", &vh_Cal, vh_Cal);

for(int i = 0; i < 5; i++){
	printf("&vh_Cal[%d] = %p | vh_Cal[%d] = %d\n", i, &vh_Cal[i], i, vh_Cal[i]);
}



return 0;
}

