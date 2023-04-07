#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void func(int *px, int *py){
	px = py;
	*py = (*py) * (*px);
}


int main(){

int x, y;

scanf("%d", &x);
scanf("%d", &y);

func(&x, &y);

printf("x = %d", x);
printf("y = %d", y);

return 0;
}

