#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


int a[5] = {8,5,3,1,2};
int chave, j;

for(int i = 0; i < 5; i++){
	chave = a[i];
	j = i - 1;
	
	while(j >= 0 && a[j] > chave){
		a[j+1] = a[j];
		j--;
		a[j+1] = chave;
	}
	printf("%d", a[i]);
}



return 0;
}

