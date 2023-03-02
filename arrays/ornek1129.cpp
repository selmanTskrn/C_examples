// dizinin elemanlarini ciftler başa gelecek şekilde düzenleme

#include <stdio.h>
void tekciftDuzenle( int[], int );
int i;
int main()
{
	int dizi[15];
	
	printf("Dizinin elemanlarini giriniz (15 adet) : ");
	for ( i=0 ; i<15 ; i++ )
		scanf("%d", &dizi[i]);
	tekciftDuzenle( dizi, 15);
	printf("Dizinin duzenlenmis hali :\n");
	for ( i=0 ; i<15 ; i++)
		printf("%d, ", dizi[i]);
}
void tekciftDuzenle( int a[], int n)
{
	int  j;
	int yedek;
	
	for ( i=0 ; i<n ; i++)
	{
		for ( j=i+1 ; j<n ; j++ ){
			if (a[j]%2==1 && a[i]%2==0){
				yedek = a[i];
				a[i] = a[j];
				a[j] = yedek;
			}
		}
	}
}