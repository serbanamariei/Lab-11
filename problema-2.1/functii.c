#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

rVECTOR citire()
{
	rVECTOR v;
	char buffer[100];
	printf("Introduceti numele vectorului: ");
	fgets(buffer,sizeof(buffer),stdin);
	int len=strlen(buffer);
	if(len>0 && buffer[len-1]=='\n')
		buffer[len-1]='\0';
	v.nume=(char *)malloc((len+1)*sizeof(char));
	if(v.nume==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}
	strcpy(v.nume,buffer);

	printf("Cate elemente doriti sa aiba vectorul: ");
	scanf("%d",&v.nrElem);
	v.elem=(double *)malloc(v.nrElem*sizeof(double));
	if(v.elem==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}
	for(int i=0;i<v.nrElem;++i)
	{
		printf("v[%d] = ",i);
		scanf("%lf",&v.elem[i]);
	}
	
	return v;
}

void afis(rVECTOR v)
{
	printf("Numele vectorului: ");
	fputs(v.nume,stdout);
	printf("\n");
	printf("Numarul de elemente: %d\n",v.nrElem);
	printf("Elementele vectorului:\n");
	printf("( ");
	for(int i=0;i<v.nrElem;++i)
	{
		printf("%.3lf ",v.elem[i]);
	}
	printf(" )\n");
}

void ordonareVal(rVECTOR v)
{
	for(int i=0;i<v.nrElem-1;++i)
		for(int j=i+1;j<v.nrElem;++j)
		{
			if(v.elem[i]>v.elem[j])
			{
				double aux=v.elem[i];
				v.elem[i]=v.elem[j];
				v.elem[j]=aux;
			}
		}
}

int sumaCifre(int n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n=n/10;
	}

	return s;
}

void ordonareSuma(rVECTOR v)
{
	for(int i=0;i<v.nrElem-1;++i)
		for(int j=i+1;j<v.nrElem;++j)
		{
			int suma1=0,suma2=0;
			int p1=floor(fabs(v.elem[i]));
			int p2=floor(fabs(v.elem[j]));
			suma1=sumaCifre(p1);
			suma2=sumaCifre(p2);

			if(suma1>suma2)
			{
				double aux=v.elem[i];
				v.elem[i]=v.elem[j];
				v.elem[j]=aux;
			}
		}
}
