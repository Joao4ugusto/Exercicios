#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 int a = 10;
 int *p1 = &a;
 int **p2 = &p1;
 
 
 printf("&a = %p, a = %d\n", &a, a);
 printf("&p1 = %p, p1 = %p\n", &p1, p1);
 printf("&p2 = %p, p2 = %p\n", &p2, p2);
 
 **p2 = 90;
 
  printf("&a = %p, a = %d\n", &a, a);

return 0;
}

