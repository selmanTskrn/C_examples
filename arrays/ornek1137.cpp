//
#include <stdio.h>
void deneyimliAcemiAyirarakYaz( int [], int );
int main()
{
	int n ;
	
	printf("Memur sayisini giriniz :");
	scanf("%d", &n);
	
	int a[n];
	printf("%d adet memurun sicil numaralarini giriniz : \n", n);
	for (int i=0 ; i<n ; i++)
		scanf("%d", &a[i]);
	
	deneyimliAcemiAyirarakYaz ( a, n );
	
}
void deneyimliAcemiAyirarakYaz( int a[], int n)
{
	int acemi[n] , deneyimli[n];
	int ac=0, dn=0, i;
	
	for ( i=0 ; i<n ; i++){
		if ( a[i]%2==1 ){
			deneyimli[dn] = a[i];
			dn++;
		}
		else {
			acemi[ac] = a[i];
			ac++;
		}
	}
	printf("Acemi memurlarin sicil numaralari : ");
	for ( i=0 ; i<ac ; i++)
		printf("%d ", acemi[i]);
	
	printf("\nDeneyimli memurlarin sicil numaralari : ");
	for ( i=0 ; i<dn ; i++)
		printf("%d ", deneyimli[i]);
	
	printf("\nNobet Listeleri :\n");
	for ( i=0 ; i<dn ; i++){
		for (int j=0 ; j<ac ; j++)
			printf("%d-%d\n", deneyimli[i], acemi[j]);
	}	
	
}