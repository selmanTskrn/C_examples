#include <stdio.h>
#include <math.h>
int enBuyukMulayim( int );
int main()
{
	printf("%d\n", enBuyukMulayim( 3 ));
	printf("%d\n", enBuyukMulayim( 4 ));
	return 0;
}
int enBuyukMulayim( int var )
{
	int a, i, toplam, carpim;
	
	for ( i = pow(10,var) ; pow(10,var-1) < i ; i-- ){
		a = i;
		toplam = 0;
		carpim = 1;
		while ( a != 0){
			carpim = carpim*(a%10);
			toplam = toplam + a%10;
			a = a / 10;
		}
		if ( carpim*toplam == i)
			break;
		
	}
	if( carpim*toplam == i)
		return i;
	else 
		return 0;
}