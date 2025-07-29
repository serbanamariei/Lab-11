#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _COMPLEX{
	double real;
	double imag;
};
typedef struct _COMPLEX COMPLEX;

COMPLEX *citire();
COMPLEX *suma(COMPLEX *a, COMPLEX *b);
COMPLEX *produs(COMPLEX *a, COMPLEX *b);
COMPLEX *conjugat(COMPLEX *a);
double modul(COMPLEX *a);

#endif
