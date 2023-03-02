#include <stdio.h>
void rotate( int [], int , int );
int main()
{
	int dizi[10];
	int miktar, i;
	
	printf("Dizinin elemanlarini giriniz : ");
	for ( i=0 ; i<10 ; i++)
		scanf("%d", &dizi[i]);
	printf("Dondurme miktari : ");
	scanf("%d", &miktar);
	rotate( dizi, 10, miktar);
	printf("\nDizinin son hali = ");
	for ( i=0 ; i<10 ; i++)
		printf("%d,", dizi[i]);
}
void rotate( int a[], int n, int k )
{
	int i, yedek;
	while (k != 0)
	{
		for ( i=0 ; i<n-1 ; i++)
		{
			yedek = a[i];
			a[i] = a[i+1];
			a[i+1] = yedek;
		}
		k--;
	}
	
}