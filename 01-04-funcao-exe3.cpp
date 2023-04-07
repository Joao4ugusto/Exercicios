#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int troca(int *x, int *y){
	int aux = *x; 
	*x = *y;
	*y = aux;
	
	return *x + *y;
}

int main(){

int a = 10;
int b = 20;
int r;

r = troca(&a, &b);


printf("%d\n", a);
printf("%d\n", b);

printf("********\n");
printf("&a = %p\n", &a);
printf("&b = %p\n", &b);


printf("resultado = %d", r);

return 0;
}

