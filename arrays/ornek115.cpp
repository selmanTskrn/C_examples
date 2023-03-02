#include <stdio.h>
int en_kucuk_bul( int [], int );
int main()
{
	int a[10] = {23, 54, 49, 39 , 49, 86, 43, 20, 10, 90};
	
	printf("%d", en_kucuk_bul( a , 10 ));

}
int en_kucuk_bul( int dizi[], int n )
{
	int enKucuk, i;
	enKucuk = dizi[0];
	
	for ( i=1 ; i<10 ; i++){
		if ( dizi[i] < enKucuk )
			enKucuk = dizi[i];
	}
	return enKucuk;
}