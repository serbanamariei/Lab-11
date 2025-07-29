#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

COMPLEX *citire()
{
	COMPLEX *z=(COMPLEX *)malloc(sizeof(COMPLEX));
	if(z==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}

	printf("partea reala: ");
	scanf("%lf",&z->real);
	printf("partea imaginara: ");
	scanf("%lf",&z->imag);

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
