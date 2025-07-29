#include<stdio.h>
#include"functii.h"

iVECTOR citire()
{
	iVECTOR v;
	printf("\nCate elemente doriti sa aiba vectorul dvs: ");
	scanf("%d",&v.nrElem);
	for(int i=0;i<v.nrElem;++i)
	{
		printf("v[%d] = ",i);
		scanf("%d",&v.elem[i]);
	}

	return v;
}

void afis(iVECTOR *v)
{
	printf("Vectorul dvs:\n");
	for(int i=0;i<v->nrElem;++i)
	{
		printf("%d ",v->elem[i]);
	}
}

long int pscalar(iVECTOR *v1, iVECTOR *v2)
{
	long int p=0;
	for(int i=0;i<v1->nrElem;++i)
		p+=v1->elem[i]*v2->elem[i];
	return p;
}

void sortare(iVECTOR *v, int tip)
{
	for(int i=0;i<v->nrElem-1;++i)
		for(int j=i+1;j<v->nrElem;++j)
		{
			if(tip==1)
			{
				if(v->elem[i]>v->elem[j])
				{
					int aux=v->elem[i];
					v->elem[i]=v->elem[j];
					v->elem[j]=aux;
				}
			}
			else
			{
				if(v->elem[i]<v->elem[j])
				{
					int aux=v->elem[i];
					v->elem[i]=v->elem[j];
					v->elem[j]=aux;
				}
			}
		}
}
