#include <stdio.h>
#include <math.h>
typedef struct cember{
	float merkezx;
	float merkezy;
	float yaricap;
} Cember;
int tegetMi( Cember , Cember );
int main()
{
	Cember a1, a2;
	
	printf("Birincinin bilgilerini giriniz (x,y,r)	: ");
	scanf("%f%f%f", &a1.merkezx, &a1.merkezy, &a1.yaricap);
	printf("Ikincinin bilgilerini giriniz (x,y,r)	: ");
	scanf("%f%f%f", &a2.merkezx, &a2.merkezy, &a2.yaricap);
	
	if ( tegetMi( a1, a2) )
		printf("Cemberler birbirine tegettir.");
	else
		printf("Cemberler birbirine teget degildir");
	
	return 0;
}
int tegetMi( Cember a, Cember b)
{
	if ((sqrt( pow((a.merkezx - b.merkezx), 2) + pow((a.merkezy - b.merkezy), 2))) == a.yaricap + b.yaricap)
		return 1;
	else 
		return 0;
}