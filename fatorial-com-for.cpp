#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int num, fat = 1;

num = 5;

for(int i = num; i > 1; i--){
	fat *= i;
}

printf("%d! = %d", num, fat);

return 0;
}

