#include<stdio.h>
#include"functii.h"

void conversie1(DATA *d)
{
	d->ziAn=0;
	int zileLuni[12];
	for(int i=0;i<12;++i)
	{
		if(i==1)
		{
			if(((d->an%4==0)&&(d->an%100!=0))||(d->an%400==0)) zileLuni[i]=29;
		}
		else if(i==7) zileLuni[i]=31;
		else if(i%2==0&&i<=5) zileLuni[i]=31;
		else if(i%2==0&&i>5) zileLuni[i]=30;
		else if(i%2!=0&&i<=5) zileLuni[i]=30;
		else zileLuni[i]=31;
	}
	
	for(int i=0;i<d->luna-1;++i) d->ziAn+=zileLuni[i];
	d->ziAn+=d->zi;
}

void conversie2(DATA *d)
{
	d->luna=0;
	d->zi=0;
	int zileLuni[12];
	for(int i=0;i<12;++i)
	{
		if(i==1)
		{
			if(((d->an%4==0)&&(d->an%100!=0))||(d->an%400==0)) zileLuni[i]=29;
			else zileLuni[i]=28;
		}
		else if(i==7) zileLuni[i]=31;
		else if(i%2==0) zileLuni[i]=31;
		else zileLuni[i]=30;
	}
	int ziuaDinAn=d->ziAn;
	int ziRamasa=d->ziAn;
	d->luna=1;
	while(d->luna<=12 && ziRamasa>zileLuni[d->luna-1])
	{
		ziRamasa-=zileLuni[d->luna-1];
		d->luna++;
	}
	d->zi=ziRamasa;
	d->ziAn=ziuaDinAn;
}
