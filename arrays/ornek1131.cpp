//elemanların yerlerini rastgele karistirma
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void karistir( int[], int );
int main()
{
	int dizi[5] = {12,11,10,9,8}, i;
	
	for (i=0 ; i<5 ; i++)
		printf("%d, ", dizi[i]);
	
	karistir( dizi, 5);
	printf("\n");
	
	for (i=0 ; i<5 ; i++)
		printf("%d, ", dizi[i]);
}
void karistir( int a[], int n)
{
	srand( time(NULL) );
	for (int i=0 ; i<n ; i++)
	{
		int swap_index = rand()%5;
		int yedek = a[i];
		a[i] = a[swap_index];
		a[swap_index] = yedek;
	}
	
}