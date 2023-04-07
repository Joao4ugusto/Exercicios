#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int cpf[11];
    int vetor[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    int vetor1[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3,2};
    int i, soma = 0, resto, digito1, digito2;

    // PEGAA OS DADOS
    printf("Digite os nove primeiros digitos do CPF: ");
    for (i = 0; i < 9; i++) {
        scanf("%1d", &cpf[i]);
        soma += cpf[i] * vetor[i];
    }

    // FAZ DIVISAO DA SOMA TOTAL POR 11
    resto = soma % 11;
    if (resto < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - resto;
    }

    cpf[9] = digito1;

    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += cpf[i] * vetor[i];
    }

    resto = soma % 11;
    if (resto < 2) {
        digito2 = 0;
    } else {
        digito2 = 11 - resto;
    }

    cpf[10] = digito2;

    printf("CPF completo: ");
    for (i = 0; i < 11; i++) {
        printf("%d", cpf[i]);
    }
    printf("\n");


return 0;
}

