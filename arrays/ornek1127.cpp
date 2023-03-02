// Girilen diziyi bir en kisa bir en uzun siralama

#include <stdio.h>
void birKisaBirUzun( float[] , int );
int main()
{
	int n=12, i;
	float boy[n];
	
	printf("Oyuncularin boylarini giriniz : \n");
	for ( i=0 ; i<n ; i++)
		scanf("%f", &boy[i]);
	birKisaBirUzun( boy, n );
	printf("Bir kisa bir uzun siralanmis hali :\n");
	for ( i=0 ; i<n ; i++){
		printf("%.2f, ", boy[i]);
	}
}
void birKisaBirUzun( float a[], int n)
{
	int i, j, enBuyuk, enKucuk;
	float yedek ;
	for ( i=0 ; i<n-1 ; i++) {
		if ( i%2 == 0){
			enKucuk=i;
			for ( j=i+1 ; j<n ; j++)
				if ( a[j]<a[enKucuk] ){
					enKucuk = j;
				}
			yedek = a[i];
			a[i] = a[enKucuk];
			a[enKucuk] = yedek;
		}
		else {
			enBuyuk = i;
			for ( j=i+1 ; j<n ; j++)
				if ( a[j]>a[enKucuk] )
					enKucuk = j;
			yedek = a[i];
			a[i] = a[enKucuk];
			a[enKucuk] = yedek;
		}
	}
}