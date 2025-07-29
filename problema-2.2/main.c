#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

int main()
{
	int n;
	printf("Nr membrii personal: ");
	scanf("%d",&n);
	getchar();
	PERSONAL *v=citire(n);
	afis(v,n);
	afis30(v,n);
	afisAlfabetic(v,n);

	return 0;
}
