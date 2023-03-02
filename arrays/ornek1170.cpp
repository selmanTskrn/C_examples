#include <stdio.h>

#define N 4
#define M 4
void diziBol( int[][N], int );
int main()
{
	int B[N][M] = {
	{5,1,11,-6},
	{10,2,7,2},
	{15,3,-1,-6},
	{-2,-3,-7,11}};
	
	int sagsol;
	
	printf("sag(0)-sol(1) : ");
	scanf("%d", &sagsol);
	
	diziBol( B, sagsol);
}
void diziBol( int B[][N], int a)
{
	int b[6];
	int i, j, k=0;
	
	if ( a == 1){
		for ( i=0 ; i<N-1 ; i++)
		{
			for ( j=0 ; j<M-1-i ; j++)
			{
				b[k] = B[i][j];
				printf("%d, ", b[k]);
				k++;
			}
		}
	}
	else {
		for ( i=0 ; i<N-1 ; i++)
		{
			for ( j=1+i ; j<M ; j++)
			{
				b[k] = B[i][j];
				printf("%d, ", b[k]);
				k++;
			}
		}
	}
	
}