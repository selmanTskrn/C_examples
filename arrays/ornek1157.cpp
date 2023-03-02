#include <stdio.h>

int main()
{
	int a[3][3];
	int i, j;
	int ustKose = 0, altKose = 0;
	printf("a degerlerini giriniz : ");
	for ( i=0 ; i<3 ; i++)
	{
		for ( j=0 ; j<3 ; j++)
			scanf("%d", &a[i][j]);
	}
	
	for ( i=0 ; i<3 ; i++){
		ustKose += a[i][i];
		altKose += a[2-i][i];
	}
	printf("ust = %d ve alt = %d", ustKose, altKose);
	
}