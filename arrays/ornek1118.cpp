#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, j, yedek, k=0;
	
	printf("Eleman sayisini giriniz : ");
	scanf("%d", &n);
	
	int a[n], b[n];
	printf("Otomatik olusturulan dizi : ");  // rastgele deger atanmasi
	srand(time(0));
	for ( i=0 ; i<n ; i++)
	{
		a[i] = rand()%100 + 1;
		b[i] = a[i];
		printf("%d, ", a[i]);
	}
	
	for ( i=0 ; i<n ; i++)	// kucukten buyuge siralama
	{
		for ( j=i+1 ; j<n ; j++)
			if ( a[i]>a[j] ){
				yedek = a[i];
				a[i] = a[j];
				a[j] = yedek;
			}
	}
	printf("\nDizininin siralanmis hali : ");
	for ( i=0 ; i<n ; i++)
		printf("%d, ", a[i]);
	
	for ( i=0 ; i<n ; i++)
		if ( a[i]==b[i] )
			k++;
	printf("\nYeri degismeyenlerin sayisi : %d", k);
	return 0;
	
}