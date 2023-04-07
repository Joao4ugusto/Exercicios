#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dobrar(int numero, int registrador) {
    if (numero == 0) {
        return 0;
    } else {
        registrador++;
        int resultado = dobrar(numero - 1, registrador);
        registrador += resultado;
        return resultado + resultado;
    }
}

int main(){
 
 int numero = 10;
 int registrador = 0;
 int resultado = dobrar(numero, registrador);
 printf("O dobro de %d eh %d\n", numero, resultado);

return 0;
}

