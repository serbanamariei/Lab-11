#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

PERSONAL *citire(int n)
{
	PERSONAL *v=(PERSONAL *)malloc(n*sizeof(PERSONAL));
	if(v==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}

	for(int i=0;i<n;++i)
	{
		int len;
		char buffer[100];
		printf("Nume: ");
		fgets(buffer,sizeof(buffer),stdin);
		len=strlen(buffer);
		if(len>0 && buffer[len-1]=='\n')
			buffer[len-1]='\0';
		v[i].nume=(char *)malloc((len+1)*sizeof(char));
		if(v[i].nume==0)
		{
			fprintf(stderr,"Memorie insuficienta\n");
			exit(EXIT_FAILURE);
		}
		strcpy(v[i].nume,buffer);

		printf("Prenume: ");
		fgets(buffer,sizeof(buffer),stdin);
		len=sizeof(buffer);
		if(len>0 && buffer[len-1]=='\n')
			buffer[len-1]='\0';
		v[i].prenume=(char *)malloc((len+1)*sizeof(char));
		if(v[i].prenume==0)
		{
			fprintf(stderr,"Memorie insuficienta\n");
			exit(EXIT_FAILURE);
		}
		strcpy(v[i].prenume,buffer);
		printf("Varsta: ");
		scanf(" %d",&v[i].varsta);
		getchar();
	}

	return v;
}

void afis(PERSONAL *v, int n)
{
	printf("\nLista personal:\n\n");
	for(int i=0;i<n;++i)
	{
		printf("Nume: ");
		fputs(v[i].nume,stdout);
		printf("\nPrenume: ");
		fputs(v[i].prenume,stdout);
		printf("Varsta: %d\n\n",v[i].varsta);
	}
}

void afis30(PERSONAL *v, int n)
{
	printf("\nLista personal cu varsta mai mica de 30 de ani:\n");
	for(int i=0;i<n;++i)
	{
		if(v[i].varsta<30)
		{
			printf("Nume: ");
			fputs(v[i].nume,stdout);
			printf("\nPrenume: ");
			fputs(v[i].prenume,stdout);
			printf("Varsta: %d\n",v[i].varsta);
		}
	}
}

void afisAlfabetic(PERSONAL *v, int n)
{
	for(int i=0;i<n-1;++i)
		for(int j=i+1;j<n;++j)
		{
			if(strcmp(v[i].nume,v[j].nume)>0)
			{
				char *aux;
				aux=v[i].nume;
				v[i].nume=v[j].nume;
				v[j].nume=aux;

				aux=v[i].prenume;
				v[i].prenume=v[j].prenume;
				v[j].prenume=aux;

				int a=v[i].varsta;
				v[i].varsta=v[j].varsta;
				v[j].varsta=a;
			}
		}

	printf("Lista personal ordonata alfabetic dupa nume:\n");
	afis(v,n);
}
