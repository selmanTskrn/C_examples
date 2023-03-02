#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enCokVurulanHalka( int[], int );
int main()
{
	int n, enCok, iska = 0;
	
	printf("Toplam atis sayisi : ");
	scanf("%d", &n);
	printf("------------------------\n");

	int a[n];
	
	enCok = enCokVurulanHalka( a, n );
	for ( int i=0 ; i<n ; i++){
		printf("%d. atisinizin rastgele vuruldugu halka : %d\n", i+1, a[i]);
		if ( a[i]==0 )
			iska++;
	}
	printf("------------------------\n");
	printf("En cok vurulan halka %d numarali halkadir\n", enCok);
	printf("Hedef %d defa iskalanmistir.", iska);
}
int enCokVurulanHalka( int a[], int n)
{
	int i, j, miktar, sayi, enCok = 1;
	
	srand(time(0));
	
	
	
	for ( i=0 ; i<n ; i++)
	{
		a[i] = rand()%11;
		miktar = 0;
		for ( j=0 ; j<n ; j++)
		{
			if ( a[i]==a[j] )
				miktar++;
		}
		if ( enCok<miktar ){
			enCok = miktar;
			sayi = a[i];
		}
	}
	
	return sayi;
}