#ifndef FUNCTII_H_
#define FUNCTII_H_

struct _PERSONAL{
	char *nume;
	char *prenume;
	int varsta;
};
typedef struct _PERSONAL PERSONAL;

PERSONAL *citire(int n);
void afis(PERSONAL *v, int n);
void afis30(PERSONAL *v, int n);
void afisAlfabetic(PERSONAL *v, int n);

#endif
