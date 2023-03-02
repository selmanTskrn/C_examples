#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define M 7

int main()
{
	int a[N][M] = {0};
	int yedek[49];
	int i, j, x, k=0, rast, test;
	
	srand(time(NULL));
	
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			do {
				rast = rand()%49 + 1;
				test = 0;
				for ( x=0 ; x<k ; x++){
					if ( yedek[x]==rast)
						test = 1;
				}
				if ( test==0){
					a[i][j] = rast;
					yedek[k] = rast;
					k++;
					break;
				}
			}while(1);
		}
	}
	
	printf("     ");
	for ( i=0 ; i<N ; i++)
		printf("| %d ", i);
	
	printf("\n");
	for ( i=0 ; i<N ; i++)
	{
		printf("[%d]   ", i);
		for ( j=0 ; j<M ; j++)
		{
			printf("%d", a[i][j]);
			if(a[i][j]/10==0)
				printf("   ");
			else 
				printf("  ");
		}
		printf("\n");
	}
}