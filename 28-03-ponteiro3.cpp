#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 void *pp;
 int *p1, p2 = 10;
 p1 = &p2;
 
 printf("%p\n", &p2);
 
 pp = &p2;
 printf("%p\n", pp);
 
 printf("%p\n", &p1);
 pp = &p1;
 printf("%p\n", pp);

return 0;
}

