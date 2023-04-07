#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   int data1, data2,  status = 0, aux;
   int dia1, dia2, mes1, mes2, ano1, ano2;
   
   printf("Digite uma data 1 : ");
   scanf("%d", &data1);
   
    printf("Digite uma data 2 : ");
    scanf("%d", &data2);
    
    // DATA 1
    aux = data1;
    aux = aux / 10000;
    
    aux =  aux * 10000;
    
    ano1 = data1 - aux;
    printf("%d \n", ano1);
    
    
    // DATA 2
    aux = data2;
    
    aux = aux / 10000;
    
    aux =  aux * 10000;
    
    ano2 = data2 - aux;
    printf("%d", ano2);
    
    if(ano1 == ano2){
    	printf("Os anos sao iguais");
	}
	else if(ano1 > ano2){
		printf("Ano 1 eh maior que ano 2");
	}
		else if(ano2 >  ano1){
		printf("Ano 2 eh maior que ano ");
	}
    
   
   

return 0;
}

