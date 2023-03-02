#include <stdio.h>
int ilkTekrarlayan( int [], int );
int main()
{
	int dizi[7]={ 3, 12, 1, 12, 7, 7, 12 }, c;
	
	c = ilkTekrarlayan( dizi, 7);
	printf("Dizinin ilk tekrarlayani = %d", c);
}
int ilkTekrarlayan( int a[], int n)
{
	int i, j, ele, ind;
	
	ind = -1;
	ele = -1;
	for ( i=0 ; i<n ; i++ )
	{
		for ( j=i+1; j<n; j++ )
		{
			if ( a[i] == a[j] )
			{
				ele = a[j];
				ind = j;
				break;
			}				
		}
		
		if ( ind != -1 )
			break;
	}
	return ele;
}