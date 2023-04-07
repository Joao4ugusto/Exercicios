#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

     int vetor[14] = {2, 3, 5, 2, 7, 8, 5, 9, 1, 3, 13, 20, 20,19};
    int unicos[14], qtd_unicos = 0, repetido;

     for(int i = 0; i < 14; i++){
     	repetido = 0;
     for(int j = i+1; j < 14; j++){
     	if(vetor[i] == vetor[j]){
     		repetido = 1;
     		break;
		 }
	 }
	 
	 if(!repetido){
	 	unicos[qtd_unicos] = vetor[i];
	 	qtd_unicos++;
	 }
	 }
   for(int i = 0; i < qtd_unicos; i++){
   	printf("%d", unicos[i]);
   }  
   
   printf("\n%d\n", qtd_unicos);
return 0;
}

// 1 - percorrer os nosso vetor com i e j
// 2 -  crio um if para comparar cada dos valores dos indices i == j
