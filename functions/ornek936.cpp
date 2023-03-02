#include <stdio.h>
float kombinasyon ( int n , int r);

int main()
{
	int n, r;
	printf("n ve r degerlerini giriniz : ");
	scanf("%d%d", &n, &r);
	
	printf("C(%d,%d) = %.1f", n, r, kombinasyon(n,r));
	return 0;
}
float kombinasyon ( int n, int r)
{
	int fak1=1, fak2=1, sy;
	
	for ( sy = n ; r<sy ; sy--){
		fak1 *= sy;
	}
	
	for ( sy = n-r ; 1<sy ; sy--){
		fak2 *= sy;
	}
	
	return fak1/fak2 ;
}