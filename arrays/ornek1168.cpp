#include <stdio.h>

#define N 100
#define M 5

void sutunDegistir( int [][M], int, int);

int main()
{
	int a[N][M];
	int i, j, k=0;
	
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++){
			a[i][j] = k;
			k++;
		}
	}
	
	sutunDegistir( a, 1, 2);
	
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void sutunDegistir( int a[][M], int n, int m)
{
	int i, j, yedek;
	
	for ( i=0 ; i<N ; i++)
	{
		yedek = a[i][n];
		a[i][n] = a[i][m];
		a[i][m] = yedek;
	}
}