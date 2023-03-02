#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8
#define M 8

int main()
{
	char a[N][M] = {
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'}};
	
	int i, j, k=0;
	int sut, test, yedek[8];
	
	srand(time(NULL));
	for ( i=0 ; i<8 ; i++)
	{
		do {
			sut = rand()%8;
			test = 0;
			for ( j=0 ; j<k ; j++){
				if ( yedek[j]==sut)
					test = 1;
			}
			
			if (a[i][sut]=='-' && test==0){
				a[i][sut] = 'K';
				yedek[k] = sut;
				k++;
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
			printf("%c ", a[i][j]);
		}
	}
}