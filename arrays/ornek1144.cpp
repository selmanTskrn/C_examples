// En cok tekrar eden harfi bulma

#include <stdio.h>
char enCokTekrarEden( char [], int );
int main()
{
	char dizi[7] = {'p','r','o','g','r','a','m'};
	char c;
	
	c = enCokTekrarEden( dizi, 7);
	printf("En cok tekrar eden harf = %c", c);
	return 0;
}
char enCokTekrarEden( char a[], int n)
{
	int i, j, miktar, enCok = 0;
	char enBuyuk ;
	
	for ( i=0 ; i<n ; i++)
	{
		miktar = 0;
		for ( j=0 ; j<n ; j++)
		{
			if ( a[i]==a[j] )
				miktar++;
		}
		if ( enCok<miktar ){
			enCok = miktar;
			enBuyuk = a[i];
		}
	}
	
	return enBuyuk;
}