#include <stdio.h>


// MODELO DE DADOS - TIPO DATA
typedef struct {
	int dia, mes, ano;
} data;

// OPERAÇÕES DE ENTRADA PARA TIPO DATA
void setdia (data *d, int x) {
	d->dia = x;
}
void setmes (data *d, int x) {
	d->mes = x;
}
void setano (data *d, int x) {
	d->ano = x;
}

// VERIFICA OS DIGITOS DO CODIGO

void setdata (data *d, int x) {
	d->d1 = x;
	
	// identificar se a data tem 6 ou 8 digitos
	// colocar os valores nos atributos do TAD
}


// OPERAÇÕES DE SAÍDA  PARA TIPO DATA
int getdia (data *d) {
	return (d->dia);
}
int getmes (data *d) {
	return (d->mes);
}
int  getano (data *d) {
	return (d->ano);
}

// OPERAÇÕES AUXILIARES PARA O TIPO DATA
int isdatavalida (data *d) {
	// verificar se a data é válida, se for retornar 1 caso contrário 0
}


int main (void) {
	data dt1, dt2;
	int dia, mes, ano, d1, d2;
	
	printf ("Informe a 1a Data: "); scanf ("%d", &d1);
	printf ("Informe o dia da 2a Data: "); scanf ("%d", &dia);
	printf ("Informe o mes da 2a Data: "); scanf ("%d", &mes);
	printf ("Informe o ano da 2a Data: "); scanf ("%d", &ano);
	setdata (&dt1, d1);
	setdia (&dt2, dia);
	setmes (&dt2, mes);
	setano (&dt2, ano);
	printf ("Data 1: %d/%d/%d\n", getdia (&dt1), getmes(&dt1), getano(&dt1));
	printf ("Data 2: %d/%d/%d\n", getdia (&dt2), getmes(&dt2), getano(&dt2));
	
	
	
	if (isdatavalida(&dt1) == 1)
		printf ("Data 1 e uma data valida...\n");
	else
		printf ("Data 1 NAO e valida...\n");
	if (isdatavalida(&dt2) == 1)
		printf ("Data 2 e uma data valida...\n");
	else
		printf ("Data 2 NAO e valida...\n");
}

