#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functii.h"

int main()
{
	rVECTOR v=citire();
	afis(v);

	printf("\nA venit momentul sa alegeti metoda de ordonare:\n");
	printf("1) Ordonare crescatoare a elementelor in functie de valoare\n");
	printf("2) Ordonare crescatoare a elementelor in functie de suma cifrelor partii intregi a modulului fiecarui element\n");
	printf("alegere --> ");
	int alegere;
	scanf("%d",&alegere);
	if(alegere==1) ordonareVal(v);
	else if(alegere==2) ordonareSuma(v);
	else{
		printf("Alegere invalida!\n");
		return 0;
	}

	printf("\nVectorul dvs dupa ordonare:\n");
	afis(v);

	return 0;
}
