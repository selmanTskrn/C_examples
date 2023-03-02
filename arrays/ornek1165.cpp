#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 10

int diziYaz( int [][M]);
int main()
{
	int a[N][M];
	int i, j, c;
	
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			a[i][j] = rand()%50 + 10;
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	c = diziYaz( a );
	printf("En kucuk = %d", c);
}
int diziYaz( int a[][M])
{
	int i, j, enKucuk;
	
	enKucuk = a[1][M-1];
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			if ( i+j<10 )
				printf("   ");
			else {
				printf(" %d", a[i][j]);
				if ( a[i][j]<enKucuk)
					enKucuk = a[i][j];
			}
		}
		printf("\n");
	}
	return enKucuk;
}