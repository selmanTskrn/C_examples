// Dizideki en buyuk ikinci degeri bulma

#include <stdio.h>
float ikinciEnBuyuk( float[], int);
int main()
{
	float dizi[6] = {3.4, 12.5, 1, 5.6, 7.8, 9.7};
	float c;
	
	c = ikinciEnBuyuk( dizi, 6 );
	printf("Dizinin ikinci en buyugu = %.2f", c );
}
float ikinciEnBuyuk( float a[], int n)
{
	float first, second, yedek;
	int i;
	
	first = a[0];
	
	for ( i=1 ; i<n ; i++)
	{
		if (a[i]>first){
			second = first;
			first = a[i];
		}
		else if ( a[i]>second ){
			second = a[i];
		}
	}
	return second;
}