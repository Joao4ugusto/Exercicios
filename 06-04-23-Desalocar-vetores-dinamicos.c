#include <stdio.h>
#include <stdlib.h>


int main(){

    int x, y, soma;
    
    printf("Digite dois valores:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = x + y;
    
    printf("%d", soma);

    return 0;
}