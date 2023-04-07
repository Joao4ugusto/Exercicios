#include <stdio.h>


int main(){

int  nums[3] = {3,2,4} ,i, j;
int target = 6;

for(i = 0; i < 3; i++){
  for(j = 0; j < 3; j++){
  		if(nums[i] + nums[j] == target){
  	   	printf("(%d, %d) soma = %d\n", i, j, target);
	}	
  }
}


return 0;
}

