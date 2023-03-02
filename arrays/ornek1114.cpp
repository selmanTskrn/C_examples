#include <stdio.h>

int main()
{
	int a[5], b[5], sonuc[100];
	int i, j, test, x, k=0;
	
	printf("a dizisinin elemanlarini giriniz : ");
	for ( i=0 ; i<5 ; i++)
		scanf("%d", &a[i]);
	
	printf("b dizisinin elemanlarini giriniz : ");
	for ( i=0 ; i<5 ; i++)
		scanf("%d", &b[i]);
	
	printf("ortak elemanlar : ");
	for ( i=0 ; i<5 ; i++)
	{
		for ( j=0 ; j<5 ; j++)
			if ( a[i]==b[j] ){
				test = 0;
				for ( x=0 ; x<k ; x++)
				{
					if ( sonuc[x]==a[i] )
						test++;
				}
				if ( test==0 ){
					sonuc[k] = a[i];
					printf("%d ", sonuc[k]);
					k++;
				}
			}
	}
	return 0;
}