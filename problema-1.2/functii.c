#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

COMPLEX *citire(int n)
{
	COMPLEX *z=(COMPLEX *)malloc(n*sizeof(COMPLEX));
	if(z==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}

	for(int i=0;i<n;++i)
	{
		printf("z%d:\n",i);
		printf("partea reala: ");
		scanf("%lf",&(z+i)->real);
		printf("partea imaginara: ");
		scanf("%lf",&(z+i)->imag);
	}

	return z;
}

COMPLEX *suma(COMPLEX *a, COMPLEX *b)
{
	COMPLEX *s=(COMPLEX *)malloc(sizeof(COMPLEX));
	if(s==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}
	
	s->real=a->real+b->real;
	s->imag=a->imag+b->imag;

	return s;
}

COMPLEX *produs(COMPLEX *a, COMPLEX *b)
{
	COMPLEX *p=(COMPLEX *)malloc(sizeof(COMPLEX));
	if(p==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}

	p->real=a->real*b->real-a->imag*b->imag;
	p->imag=a->real*b->imag+a->imag*b->real;

	return p;
}

COMPLEX *conjugat(COMPLEX *a)
{
	COMPLEX *c=(COMPLEX *)malloc(sizeof(COMPLEX));
	if(c==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}

	c->real=a->real;
	c->imag=-a->imag;

	return c;
}

double modul(COMPLEX *a)
{
	return sqrt(a->real*a->real+a->imag*a->imag);
}

COMPLEX sumaElem(COMPLEX *z, int n)
{
	COMPLEX s={0,0};

	for(int i=0;i<n;++i)
	{
		s.real+=z[i].real;
		s.imag+=z[i].imag;
	}

	return s;
}

COMPLEX sumaP(COMPLEX *z, int n)
{
	COMPLEX p={0,0};

	for(int i=0;i<n;i+=2)
	{
		p.real+=z[i].real;
		p.imag+=z[i].imag;
	}

	return p;
}

void afisSirModule(COMPLEX *z, int n)
{
	printf("\nSir module nr complexe:\n");
	for(int i=0;i<n;++i)
	{
		printf("%.2lf ",modul(&z[i]));
	}
	printf("\n");
}

void afisArg(COMPLEX *z, int n)
{
	printf("\nSir argumente nr complexe:\n");
	for(int i=0;i<n;++i)
	{
		printf("%.2lf ",atan(z[i].imag/z[i].real));
	}
	printf("\n");
}

/*COMPLEX *sumaElem(COMPLEX *z, int n)
{
	COMPLEX *s=(COMPLEX *)malloc(COMPLEX);
	if(s==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}
	*s={0,0};
	for(int i=0;i<n;++i)
	{
		s=suma(s,z+i);
	}

	return s;
}*/
