#include <stdio.h>
int ilkBenzersiz( int [], int );
int main()
{
	int dizi[7]={ 3, 12, 1, 12, 7, 3, 12 }, c;
	
	c = ilkBenzersiz( dizi, 7);
	printf("Dizinin ilk benzersizi = %d", c );
}
int ilkBenzersiz( int a[], int n )
{
	int i, j, test, sayi;
	
	test = 1;
	sayi = -1;
	for ( i=0 ; i<n ; i++)
	{
		for ( j=0 ; j<n && test==1 ; j++)
		{
			if ( a[i] == a[j] && i!=j ){
				test = 0;
			}
		}
		if (test==1){
			sayi = a[i];
			break;
		}
		else
			test = 1;
	}
	return sayi;
}