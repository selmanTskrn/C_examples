#include <stdio.h>

int bursiyerBul( float *, int *, int *, float *, int *, int *);

int main()
{
	float ort1, ort2;
	int giris1, giris2;
	int dogum1, dogum2;
	int c;
	
	printf("Birinci ogrencinin bilgileri : ");
	scanf("%f%d%d", &ort1, &giris1, &dogum1);
	
	printf("Ikinci ogrencinin bilgileri : ");
	scanf("%f%d%d", &ort2, &giris2, &dogum2);
	
	c = bursiyerBul( &ort1, &giris1, &dogum1, &ort2, &giris2, &dogum2 );
	
	printf("---------------------------\n");
	if ( c == 0 )
		printf("Daha basarili olan, ortalamasi %.2f, giris yili %d ve dogum tarihi %d olandir", ort1, giris1, dogum1);
	else
		printf("Daha basarili olan, ortalamasi %.2f, giris yili %d ve dogum tarihi %d olandir", ort2, giris2, dogum2);
	return 0;
}
int bursiyerBul( float *ort1p, int *giris1p, int *dogum1p, float *ort2p, int *giris2p, int *dogum2p)
{
	int test;
	
	if ( *ort1p < *ort2p)
		test = 1;
	else if ( *ort1p > *ort2p)
		test = 0;
	if ( *ort1p == *ort2p){
		if ( *giris1p < *giris2p)
			test = 1;
		else if ( *giris1p > *giris2p)
			test = 0;
		else if ( *giris1p == *giris2p){
			if ( *dogum1p < *dogum2p)
				test = 1;
			else if ( *dogum1p > *dogum2p)
				test = 0;
		}
	}
	return test;
}
