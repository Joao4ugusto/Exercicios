#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int nums[5] = {1,2,3,4,5}, i;
int ultimos = nums[4];

nums[4] = ultimos + 1;

for(i = 0; i < 5; i++){
	printf("%d", nums[i]);
}



return 0;
}

