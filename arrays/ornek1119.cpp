#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, j, yedek, ceyrek;
	
	printf("Eleman sayisini giriniz : ");
	scanf("%d", &n);
	
	int a[n];
	printf("Otomatik olusturulan dizi : ");  // rastgele deger atanmasi
	srand(time(0));
	for ( i=0 ; i<n ; i++)
	{
		a[i] = rand()%100 + 1;
		printf("%d, ", a[i]);
	}
	
	
	for ( i=0 ; i<n ; i++){
		for ( j=i+1 ; j<n ; j++)
			if( a[i]>a[j] ){
				yedek = a[i];
				a[i] = a[j];
				a[j] = yedek;
			}
	}
	printf("\nDizinin siralanmis hali : ");
	for ( i=0 ; i<n ; i++)
		printf("%d, ", a[i]);
	
	ceyrek = (n+1)/4;
	printf("\nIlk ceyreklik degeri (%d. siradaki) : %d", ceyrek, a[ceyrek-1]);
}