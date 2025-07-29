#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

int main()
{
	COMPLEX *z=0;
	int n;
	printf("nr de nr complexe: ");
	scanf("%d",&n);
	printf("Cititi sirul de %d numere complexe:\n",n);
	z=citire(n);
	COMPLEX s=sumaElem(z,n);
	COMPLEX sp=sumaP(z,n);
	printf("\n\nSuma elementelor din sir: %.2lf + %.2lfi\n",s.real,s.imag);
	printf("\nSuma elementelor cu indice par: %.2lf + %.2lfi\n",sp.real,sp.imag);
	COMPLEX si;
	si.real=s.real-sp.real;
	si.imag=s.imag-sp.imag;
	printf("\nSuma elementelor cu indice impar: %.2lf + %.2lfi\n",si.real,si.imag);
	afisSirModule(z,n);
	afisArg(z,n);

	return 0;
}
