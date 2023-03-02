#include <stdio.h>
#include <math.h>
int enBuyukKupunuDolduran( int );
int main()
{
	printf("%d\n", enBuyukKupunuDolduran( 3 ));
	printf("%d\n", enBuyukKupunuDolduran( 4 ));
}
int enBuyukKupunuDolduran( int j )
{
	int var, i, toplam ;
	
	for ( i = pow(10,j) ; pow(10,j-1) < i ; i-- ){
		var = i;
		toplam = 0;
		while ( var != 0 ){
			toplam = toplam + var%10;
			var /= 10;
		}
		if ( pow(toplam,3) == i )
			break;
	}
	return i;
}