#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int v[5] = {0,1,2,3,10};

for(int i = 0; i < 5; i++){
	printf("&v[%i] = %p, v[%i] = %d\n", i, &v[i], i, v[i]);
}


printf("\n&v[6] = %p, v[6] = %d\n", &v[6], v[6]);

return 0;
}

