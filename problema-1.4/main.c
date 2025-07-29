#include<stdio.h>
#include"functii.h"

int main()
{
	printf("\nCititi primul vector:\n");
	iVECTOR v1=citire();
	afis(&v1);
	printf("\nCititi al doilea vector:\n");
	iVECTOR v2=citire();
	afis(&v2);
	printf("Produsul scalar dintre cei doi vectori este: %ld\n",pscalar(&v1,&v2));
	int alegere;
	printf("A sosit momentul sa sortati vectorii, alegeti tipul de sortare:\n");
	printf("Introduceti 1 pentru sortare strict crescatoare SAU -1 pentru sortare strict descrescatoare\n");
	printf("alegere --> ");
	scanf("%d",&alegere);
	if(alegere!=1||alegere!=-1) printf("Alegere invalida!\n");
	printf("Vectorii sortati sunt:\n");
	sortare(&v1,alegere);
	sortare(&v2,alegere);
	afis(&v1);
	afis(&v2);

	return 0;
}
