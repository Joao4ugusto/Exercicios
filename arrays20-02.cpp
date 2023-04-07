#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   int nums[6] = {1,3,5,6,7,8}, i, j;
   int alvo = 7;
   
   for(i = 0; i < 6; i++){
   	if(nums[i] == alvo){
   		printf("%d\n", i);
   		break;
}
} if (nums[i] != alvo){
    	for(j = 0; j < alvo; j++){
     	printf("%d", j);
	 }

	}
     

return 0;
}

