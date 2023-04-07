#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

 int conjunto1[5] = {0};
 int conjunto2[5] = {0};
 int conjunto3[5] = {0};
 int i, j;
 int aux;
 
 // RECEBE OS DADOS*************
 for(i = 0; i < 5; i++){
 	printf("Conjunto 1: ");
 	scanf("%d", &conjunto1[i]);
 }
 
  for(i = 0; i < 5; i++){
 	printf("Conjunto 2: ");
 	scanf("%d", &conjunto2[i]);
 }

// PROCESSA OS DADOS***********

for(i = 0; i < 5; i++){
	for(j = 0; j < 5; j++){
		if(conjunto1[i] == conjunto2[j]){
			conjunto3[aux] = conjunto1[i];
			aux++;
			break;
		}
	}
}


//  SAIDA DOS DADOS***********

printf("Conjunto 1: ");
for(i = 0; i < 5; i++){
	printf("%d", conjunto1[i]);
}

printf("\nConjunto 2: ");
for(i = 0; i < 5; i++){
	printf("%d", conjunto2[i]);
}

printf("\nOs valores iguais sao: ");
for(i = 0; i < 5; i++){
	printf("%d", conjunto3[i]);
}



return 0;
}

