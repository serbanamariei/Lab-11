#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _rVECTOR{
	char *nume;
	int nrElem;
	double *elem;
};
typedef struct _rVECTOR rVECTOR;

rVECTOR citire();
void afis(rVECTOR v);
void ordonareVal(rVECTOR v);
void ordonareSuma(rVECTOR v);
int sumaCifre(int n);

#endif
