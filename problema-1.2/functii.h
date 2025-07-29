#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _COMPLEX{
	double real;
	double imag;
};
typedef struct _COMPLEX COMPLEX;

COMPLEX *citire(int n);
COMPLEX *suma(COMPLEX *a, COMPLEX *b);
COMPLEX *produs(COMPLEX *a, COMPLEX *b);
COMPLEX *conjugat(COMPLEX *a);
double modul(COMPLEX *a);
COMPLEX sumaElem(COMPLEX *z, int n);
COMPLEX sumaP(COMPLEX *z, int n);
void afisSirModule(COMPLEX *z, int n);
void afisArg(COMPLEX *z, int n);

#endif
