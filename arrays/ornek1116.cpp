#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, j, yedek;
	float ortanca;
	
	printf("Eleman sayisini giriniz (en fazla 50) : ");
	scanf("%d", &n);
	
	int a[n];
	printf("Otomatik olusturulan dizi : ");  // rastgele deger atanmasi
	srand(time(0));
	for ( i=0 ; i<n ; i++)
	{
		a[i] = rand()%100 + 1;
		printf("%d ", a[i]);
	}
	
	for( i=0 ; i<n ; i++)  // kucukten buyuge siralama 
	{
		for ( j=i+1 ; j<n ; j++)
		{
			if ( a[i]>a[j] ){
				yedek = a[i];
				a[i] = a[j];
				a[j] = yedek;
			}
			
		}
		
	}
	printf("\nDizinin siralanmis hali : ");
	for ( i=0 ; i<n ; i++)
		printf("%d ", a[i]);
	
	printf("\nOrtanca = ");
	if ( n%2==0 )
		ortanca = ( a[n/2] + a[(n-1)/2] ) / 2;  
	else 
		ortanca = a[n/2];
	printf("%.2f", ortanca);
	return 0;
}