#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int data1;
int data2;
int i, j;

// RECEBE OS DADOS

printf("Digite data 1: (ano, mes, dia): ");
scanf("%d", &data1);

printf("Digite data 2: (ano, mes, dia): ");
scanf("%d", &data2);

// FAZER O PROCESSAMENTO DOS DADOS

 int ano1 = data1 / 10000;
 int mes1 = (data1 % 10000) / 100;
 int dia1 = data1 % 100;
 
 int ano2 = data2 / 10000;
 int mes2 = (data2 % 10000) / 100;
 int dia2 = data2 % 100;
 

// FAZER A SAIDA DOS DADOS

printf("\nDATA 1");
printf("\n Ano: %d", ano1);
printf("\n Mes: %d", mes1);
printf("\n Dia: %d", dia1);

printf("\n\nDATA 2");
printf("\n Ano: %d", ano2);
printf("\n Mes: %d", mes2);
printf("\n Dia: %d", dia2);

// DATA 1 MAIOR QUE 2
if(ano1 > ano2){
	printf("\n\nAno 1 eh maior");
	printf("\n*****Data 1 eh maior*****");

// DATA 2 MAIOR QUE 1	
}else if(ano2 > ano1) {
	printf("\n\nAno 2 eh maior");
	printf("\n*****Data 2 eh maior*****");
	
// DATAS SAO IGUAIS
} else if( ano1 == ano2) {
	printf("\n\nOs anos sao iguais!!!");
    // QUAL MES EH MAIOR
    if(mes1 > mes2){
    	printf("\nMes 1 eh maior!!!");
    	printf("\n***Data 1 eh maior***");
	} else if(mes2 > mes1){
		printf("Mes 2 eh maior!!!");
		printf("\n***Data 1 eh maior***");
	} else if(mes1 == mes2){
	    printf("\nOs meses sao iguais");
		
		//QUAL DIA EH MAIOR
		if(dia1 > dia2){
			printf("\nDia 1 eh maior!!!");
			printf("\n***Data 1 eh maior***");
		} else if(dia2 > dia1){
			printf("\nDia 2 eh maior!!!");
			printf("\n***Data 2 eh maior***");
		} else {
			printf("\nOs dias sao iguais!!!");
			printf("\n***Datas sao iguais***");
		}	
	}

} 



return 0;
}

