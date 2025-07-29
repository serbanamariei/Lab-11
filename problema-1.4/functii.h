#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _iVECTOR{
	int nrElem;
	int elem[10];
};
typedef struct _iVECTOR iVECTOR;

iVECTOR citire();
void afis(iVECTOR *v);
long int pscalar(iVECTOR *v1, iVECTOR *v2);
void sortare(iVECTOR *v, int tip);

#endif
