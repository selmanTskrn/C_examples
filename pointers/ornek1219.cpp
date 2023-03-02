#include <stdio.h>

int ilerideOlanibul( int *, int *, int *, int *, int *, int *);

int main()
{
	int gun1, ay1, yil1;
	int gun2, ay2, yil2;
	int c;
	
	printf("Birinci tarihi giriniz : ");
	scanf("%d%d%d", &gun1, &ay1, &yil1);
	
	printf("Ikinci tarihi giriniz : ");
	scanf("%d%d%d",&gun2, &ay2, &yil2);
	
	c = ilerideOlanibul( &gun1, &ay1, &yil1, &gun2, &ay2, &yil2);
	
	if ( c == 1)
		printf("Ileride olan : %d / %d / %d", gun2, ay2, yil2);
	else 
		printf("Ileride olan : %d / %d / %d", gun1, ay1, yil1);
	return 0;
}
int ilerideOlanibul( int *gun1p, int *ay1p, int *yil1p, int *gun2p, int *ay2p, int *yil2p)
{
	int test;
	
	if ( *yil1p < *yil2p)
		test = 1;
	else if ( *yil1p > *yil2p)
		test = 0;
	if ( *yil1p == *yil2p){
		if ( *ay1p < *ay2p)
			test = 1;
		else if ( *ay1p > *ay2p)
			test = 0;
		else if ( *ay1p == *ay2p){
			if ( *gun1p < *gun2p)
				test = 1;
			else if ( *gun1p > *gun2p)
				test = 0;
		}
	}
	return test;
}