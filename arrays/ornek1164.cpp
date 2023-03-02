#include <stdio.h>

#define N 4
#define M 3

void siralama( int [][M]);
int main()
{
	int a[N][M] = {{2,1,0}, {1,4,3}, {5,3,0}, {8,8,3}};
	int i, j;
	
	printf("Dizinin sirasiz hali\n");
	for ( i=0 ; i<N ; i++)
	{
		printf("    ");
		for ( j=0 ; j<M ; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	siralama( a );
	
	printf("Dizinin siralanmis hali\n");
	for ( i=0 ; i<N ; i++)
	{
		printf("    ");
		for ( j=0 ; j<M ; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void siralama( int a[][M])
{
	int i, j, k, x=0;
	int yedek, yerdegisimi = 1;
	int b[M*N];
	
	for ( i=0 ; i<N ; i++)
	{
		for( j=0 ; j<M ; j++)
		{
			b[x] = a[i][j];
			x++;
		}
	}
	for ( i=1 ; i<x && yerdegisimi ; i++)
	{
		yerdegisimi = 0;
		for ( j=0 ; j<x-i ; j++)
			if ( b[j]>b[j+1]){
				yedek = b[j];
				b[j] = b[j+1];
				b[j+1] = yedek;
				yerdegisimi = 1;
			}
	}
	x = 0;
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			a[i][j] = b[x];
			x++;
		}
	}
}