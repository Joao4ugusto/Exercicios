#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float soma(float x, float y){
     
    int r = x - y; 

	return r;
}

int main(){

float valor1 = 20.4;
float valor2 = 10.6;

float resultado = soma(valor1, valor2);

printf("%0.2f", resultado);

return 0;
}

