#include <stdio.h>

#define N 6
#define M 6

int main()
{
	int sehir[N][M];
	int i, j;
	int adet = 0;
	
	for ( i=0 ; i<N ; i++)
	{
		printf("%d. sehrin tum sehirlere mesafesini giriniz : ", i+1);
		for ( j=0 ; j<M ; j++)
			scanf("%d", &sehir[i][j]);
	}
	
	printf("Aralarindaki mesafe farkli girilmis olan sehirler:\n");
	for ( i=0 ; i<N ; i++)
		for ( j=0+i ; j<M ; j++)
			if ( sehir[i][j] != sehir[j][i]){
				printf("%d-%d, ", i+1, j+1);
				adet++;
			}
		
	printf("\n%d adet uzaklik farkli girilmistir.", adet);
	
}