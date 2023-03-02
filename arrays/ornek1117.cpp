#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, j, k=0;
	int yedek, yerdegisimi = 1;
	
	printf("Eleman sayisini giriniz : ");
	scanf("%d", &n);
	
	int a[n], b[n];
	printf("Otomatik olusturulan dizi : ");  // rastgele deger atanmasi
	srand(time(0));
	for ( i=0 ; i<n ; i++)
	{
		a[i] = rand()%100 + 1;
		b[i] = a[i];
		printf("%d ", a[i]);
	}
	
	for ( i=1 ; i<n && yerdegisimi ; i++)
	{
		yerdegisimi = 0;
		for ( j=0 ; j<n-i ; j++)
			if ( a[j]>a[j+1] ){
				yedek = a[i];
				a[i] = a[j];
				a[j] = yedek;
				yerdegisimi = 1;
			}
	}
	printf("\nDizininin siralanmis hali : ");
	for ( i=0 ; i<n ; i++)
		printf("%d ", a[i]);
	
	printf("\nYeri degisenlerlerin sayisi : ");
	for ( i=0 ; i<n ; i++){
		if( a[i]!=b[i] )
			k++;
	}
	printf("%d", k);
	
}