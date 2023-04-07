#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int a, b, *p1, *p2;

a = 4;
b = 3;
p1 = &a;
p2 = p1;

*p2 = *p1 *3; 
b = b * (*p1);
(*p2)++;

printf("%d\n\n", a);
printf("%d\n\n", *p1);
printf("%d\n\n", *p2);
printf("%d\n", b);

return 0;
}

