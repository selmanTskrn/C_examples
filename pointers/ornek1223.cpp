#include <stdio.h>

void bulBozuklukSayisi( float , int *, int *, int *, int *, int *);

int main()
{
	float para;
	int krs100=0;
	int krs50=0;
	int krs25=0;
	int krs10=0;
	int krs5=0;
	
	printf("Para miktarini giriniz : ");
	scanf("%f", &para);
	
	bulBozuklukSayisi( para , &krs100, &krs50, &krs25, &krs10, &krs5 );
	
	printf("---------------"
	"\n%d adet 1TL"
	"\n%d adet 50Krs"
	"\n%d adet 25Krs"
	"\n%d adet 10Krs"
	"\n%d adet 5Krs", krs100, krs50, krs25, krs10, krs5);
	
}
void bulBozuklukSayisi( float para, int *yuzp, int *ellip, int *yirmibesp, int *onp, int *besp)
{
	para = para*100;
	
	*yuzp = para/100;
	para -= *yuzp * 100;
	
	*ellip = para/50;
	para -= *ellip * 50;
	
	*yirmibesp = para/25;
	para -= *yirmibesp * 25;
	
	*onp = para/10;
	para -= *onp * 10;
	
	*besp = para/5;
}