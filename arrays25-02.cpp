#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int nums1[6] = {1,2,3, 0,0, 0};
int nums2[3] = {2,4,5};
int i, j, aux;

int tamanho = sizeof(nums1) / sizeof(nums1[0]) + sizeof(nums2) / sizeof(nums2[0]);
int vetor[tamanho];

for(i = 0; i < sizeof(nums1) / sizeof(nums1[0]); i++){
	vetor[i] = nums1[i];
}

for(j = 0; j < sizeof(nums2) / sizeof(nums2[0]); j++){
	vetor[i] = nums2[j];
	i++;
}

for(i = 0; i < tamanho; i++){
	for(j = i; j < tamanho; j++){
		if(vetor[i] > vetor[j]){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
		}
	}
}

for(i = 0; i < tamanho; i++){
   if(vetor[i] > 0){
   	printf("%d", vetor[i]);''
   }
}

return 0;
}

