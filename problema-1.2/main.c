#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

int main()
{
	printf("Cititi numerele complexe:\n");
	printf("z1:\n");
	COMPLEX *z1=citire();
	printf("z2:\n");
	COMPLEX *z2=citire();

	COMPLEX *c1,*c2,*c3;
	c1=suma(produs(&(COMPLEX){2,0},z1),produs(&(COMPLEX){3.2,0},z2));
	printf("c1 = %.2lf + %.2lfi\n",c1->real,c1->imag);

	c2=produs(suma(produs(&(COMPLEX){3.5,0},z1),&(COMPLEX){1,0}),z2);
	printf("c2 = %.2lf + %.2lfi\n",c2->real,c2->imag);

	c3=produs(z1,produs(conjugat(z2),&(COMPLEX){1/(modul(z2)*modul(z2)),0}));
	printf("c3 = %.2lf + %.2lfi\n",c3->real,c3->imag);

	return 0;

}
