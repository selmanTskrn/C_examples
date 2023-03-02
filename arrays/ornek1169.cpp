#include <stdio.h>

#define N 10
#define M 10

int main()
{
	int a[N][M] = {
	{25,14,30,25,54,16,45,51,85,12},
	{55,47,13,25,15,31,45,18,50,7},
	{31,25,16,70,21,25,81,50,16,45},
	{58,50,41,25,57,11,25,61,50,16},
	{45,18,55,41,25,15,70,11,25,61},
	{50,16,45,18,55,31,25,16,70,21},
	{25,81,50,16,14,56,18,50,9,10},
	{21,25,117,100,25,31,50,11,64,56},
	{18,50,12,50,14,71,30,25,15,40},
	{31,64,55,18,50,12,13,14,15,16}};
	
	int sat, sut;
	int i, j, toplam, enKucuk = 9999;
	
	printf("Arazinin parsel verimliliklerini giriniz (10x10) : ");
	
	for ( i=0 ; i<N-1 ; i++)
	{
		
		for ( j=0 ; j<M-1 ; j++)
		{	
			toplam = 0;
			toplam = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
			if ( toplam < enKucuk){
				enKucuk = toplam;
				sat = i+1;
				sut = j+1;
			}
			
		}
	}
	printf("\nEvin yapilacagi parsellerin satir ve sutun numaralari :\n");
	for ( i=0 ; i<2 ; i++)
	{
		for ( j=0 ; j<2 ; j++)
		{
			printf("%d-%d, ", i+sat, j+sut);
		}
	}
}