#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Fatorial(int n){
	if(n == 0){
		return 1;
	} else {
		return n * Fatorial(n - 1);
	}
}

int main(){
   
   int n = 8;
   int resultado;
   resultado = Fatorial(n);
   printf("%d! = %d", n, resultado);
   

}

