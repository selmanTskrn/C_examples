#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define M 8

int main()
{
	char myn[N][M] = {
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'}};
	int i, j;
	int sat, sut;
	
	srand(time(NULL));
	for ( i=0 ; i<9 ; i++)
	{
		do {
			sat = rand()%8;
			sut = rand()%8;
			if (myn[sat][sut]=='-'){
				myn[sat][sut] = '*';
				break;
			}	
		}while(1);
	}
	printf(" ");
	for ( i=0 ; i<N ; i++)
		printf(" %d", i);
	for ( i=0 ; i<N ; i++)
	{
		printf("\n%d ", i);
		for ( j=0 ; j<N ; j++){
			printf("%c ", myn[i][j]);
		}
	}
}