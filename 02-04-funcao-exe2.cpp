#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void soma(int x, int y, int *z){
*z = x + y;
}

int main(){


int a = 30;
int b = 20;
int c;

soma(a, b, &c);


printf("%d", a);
printf("%d", b);
printf("%d", c);

return 0;
}

