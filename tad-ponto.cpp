#include <stdio.h>
#include "tad_ponto.h"

int main (void) {
	ponto p1, p2;
	int a, b;
	printf ("p1.x: "); scanf ("%d", &a);
	printf ("p1.y: "); scanf ("%d", &b);
	setponto (&p1, a, b);
	printf ("p2.x: "); scanf ("%d", &a);
	printf ("p2.y: "); scanf ("%d", &b);
	setx (&p2, a);
	sety (&p2, b);
	printf ("p1 = %d.%d \n", getx(&p1), gety(&p1));
	printf ("p2 = %d.%d \n", getx(&p2), gety(&p2));
	system ("pause");
	return 0;
}
