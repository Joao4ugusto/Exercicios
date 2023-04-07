#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int dia, mes, ano, dia2, mes2, ano2, d1, d2;
}data;

// ENTRADA DE DADOS
// DATA 1 ENTRADA
void setdia (data *d, int x) {
	d->dia = x;
}
void setmes (data *d, int x) {
	d->mes = x;
}
void setano (data *d, int x) {
	d->ano = x;
}

// DATA 2 ENTRADA
void setdia2 (data *d, int x){
	d->dia2 = x;
}

void setmes2 (data *d, int x){
	d->mes2 = x;
}

void setano2 (data *d, int x){
	d->ano2 = x;
}

// VERIFICA A ENTRADA DAS DATAS


void setdata1(data *d, int x) {
    if (x < 1000000) { // Se tiver 6 digitos
        d->dia = x / 10000;
        d->mes = (x % 10000) / 100;
        d->ano = x % 100;   
    } else { // Se tiver 8 digitos
        d->dia = x / 1000000;
        d->mes = (x % 1000000) / 10000;
        d->ano = x % 10000;
    }
}

int getdata1(data *d){
	return  printf("%d", d->dia + d->mes + d->ano);
}

// SAIDA DE DADOS

// DATA 1 SAIDA
int getdia (data *d) {
	return (d->dia);
}
int getmes (data *d) {
	return (d->mes);
}
int  getano (data *d) {
	return (d->ano);
}

// DATA 2 SAIDA
int getdia2 (data *d) {
	return (d->dia2);
}
int getmes2 (data *d) {
	return (d->mes2);
}
int  getano2 (data *d) {
	return (d->ano2);
}

// VERIFICA DE AS DATAS SÃO VALIDAS

// OPERAÇÕES AUXILIARES PARA O TIPO DATA
int isdatavalida1 (data *d) {
  if(d->dia <= 0 || d->dia > 31){
  	return 0;
  }
  if(d->mes <= 0 || d->mes > 12){
  	return 0;
  }
  if(d->ano <= 1900 || d->ano > 2023){
  	return 0;
  }
  return 1;
}

int isdatavalida2 (data *d) {
  if(d->dia2 <= 0 || d->dia2 > 31){
  	return 0;
  }
  if(d->mes2 <= 0 || d->mes2 > 12){
  	return 0;
  }
  if(d->ano2 <= 1900 || d->ano2 > 2023){
  	return 0;
  }
  return 1;
}



int main(void){
  
  data dt1, dt2;
  int d1, dia, mes, ano, d2, dia2, mes2, ano2;
  
  // ENTRADA DE DADOS DATA 1
  printf("Digite D1:"); scanf("%d", &d1);
  printf("Digite dia de Data 1:"); scanf("%d", &dia);
  printf("Digite mes de Data 1:"); scanf("%d", &mes);
  printf("Digite ano de Data 1:"); scanf("%d", &ano);
  
  
  
  // ENTRADA DE DADOS DATA 2
  printf("\nDigite D2:"); scanf("%d", &d2);
  printf("Digite dia de Data 2:"); scanf("%d", &dia2);
  printf("Digite mes de Data 2:"); scanf("%d", &mes2);
  printf("Digite ano de Data 2:"); scanf("%d", &ano2);
  
  //ATRIBUINDO DADOS A VARIAVEL DATA
  setdata1 (&dt1, d1);
  setdia (&dt1, dia);
  setmes (&dt1, mes);
  setano (&dt1, ano);
  
//setdata2 (&dt1, d2);
  setdia2 (&dt2, dia2);
  setmes2 (&dt2, mes2);
  setano2 (&dt2, ano2);
  
  //SAIDA DE DADOS DATA 1 E DATA 2
  printf ("Data 1: %d/%d/%d\n", getdia (&dt1), getmes(&dt1), getano(&dt1));
  printf ("Data 2: %d/%d/%d\n", getdia2 (&dt2), getmes2(&dt2), getano2(&dt2));
  
  //printf("%d", getdata1);
  
  printf("\n");
  
  if (isdatavalida1(&dt1) == 1)
		printf ("Data 1 e uma data valida...\n");
  else
		printf ("Data 1 NAO e valida...\n");
		
 if (isdatavalida2(&dt2) == 1)
		printf ("Data 2 e uma data valida...\n");
  else
		printf ("Data 2 NAO e valida...\n");

return 0;
}

