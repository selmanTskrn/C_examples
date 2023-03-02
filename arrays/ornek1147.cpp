// dizideki sayilarin her birini rastgele yazdirma
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10}, sonuc[10];
	int i, x, k=0, rast, test;
	
	printf("Sorularin sinavdaki duzenleri asagidaki gibi olabilir : \n");
	srand(time(0));
	
	for ( i=0 ; i<10 ; i++)
	{
		test = 0;
		while ( test==0  )
		{
			test = 1;
			rast = rand()%10;
			for ( x=0 ; x<k ; x++){
				if ( sonuc[x]==rast )
					test = 0;
			}
		}
		sonuc[k] = rast;
		printf("%d, ", a[rast]);
		k++;
	}

	
}