#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int nums[6] = {1,2,2,3,5,6}, i, j;
int unicos[6], Qunicos = 0, repetidos;
int val = 2;

for(i = 0; i < 6; i++){
	repetidos = 0;
for(j = i; j < 6; j++){
	if(nums[i] == val){
		repetidos = 1;
		break;
	}
}
   if(!repetidos){
   	unicos[Qunicos] = nums[i];
   	Qunicos++;
   }
}

for(i = 0; i < Qunicos; i++){
	printf("%d", unicos[i]);
}

printf("\n%d", Qunicos);

return 0;
}

