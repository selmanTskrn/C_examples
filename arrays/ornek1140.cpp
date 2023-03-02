// dizi icindeki her bir elemanin tekrar edilme sayisi
#include <stdio.h>

int main()
{
	int a[10], yedek[10] ;
	int i, j, test, k=0;
	
	printf("a dizisinin elemanlarini giriniz : ");
	for ( i=0 ; i<10 ; i++)
		scanf("%d", &a[i]);
	
	printf("\nElemanlarin tekrar edilme sayisi :\n");
	
	for ( i=0 ; i<10 ; i++)
	{
		test = 0;
		for ( j=0 ; j<k ; j++)
		{
			if ( yedek[j]==a[i] )
				test=1;
		}
		if ( test==0){
			yedek[j] = a[i];
			k++;
		}
	}
	
	for ( j=0 ; j<k ; j++)
	{
		test = 0;
		for ( i=0 ; i<10 ; i++)
			if ( yedek[j]==a[i] )
				test++;
		printf("%d sayisindan %d tane\n", yedek[j], test);
	}
	return 0;
}