#include<stdio.h>
#include"functii.h"

int main()
{
	DATA d1,d2;
	printf("Introduceti data pentru conversia 1:\n");
	printf("zi: ");
	scanf("%d",&d1.zi);
	printf("luna: ");
	scanf("%d",&d1.luna);
	printf("an: ");
	scanf("%d",&d1.an);

	printf("Introduceti data pentru conversia 2:\n");
	printf("zi din an: ");
	scanf("%d",&d2.ziAn);
	printf("anul: ");
	scanf("%d",&d2.an);

	conversie1(&d1);
	conversie2(&d2);

	printf("Rezultate:\n");
	printf("d1: %d/%d/%d	zi din an: %d\n",d1.zi,d1.luna,d1.an,d1.ziAn);
	printf("d2: %d/%d/%d	zi din luna: %d		luna: %d\n",d2.zi,d2.luna,d2.an,d2.zi,d2.luna);

	return 0;
}
