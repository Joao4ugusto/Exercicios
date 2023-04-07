#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int cpf[9];
int vetor1[9] = {10, 9, 8, 7, 6, 5, 4, 3,2};
int vetor2[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3 ,2};
int resultado1, resultado2, digito1, digito2;

printf("Nove primeiros digitos cpf: ");
for(int i = 0; i < 9; i++){
	scanf("%d", cpf[i]);
	
	resultado1 = cpf[i] * vetor1[i];
}

digito1 = resultado % 11;

printf("%d", digito1);




return 0;
}

