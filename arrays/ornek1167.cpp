#include <stdio.h>

#define N 5
#define M 3

int main()
{
	int a[N][M];
	int b[N] = {0};
	int i, j;
	float ort[N] = {0};
	
	for ( i=0 ; i<N ; i++)
	{
		printf("%d. ogrencinin notlari : ", i+1);
		for ( j=0 ; j<M ; j++){
			scanf("%d", &a[i][j]);
			ort[i] += a[i][j];
		}
	}
	
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			if ( a[i][j] < 41)
				b[i]++;
			else if ( a[i][j] < 60 && ort[i]/3 < 60)
				b[i]++;
		}
	}
	
	printf("Kalinan ders sayisi : \n");
	for ( i=0 ; i<N ; i++)
		printf("%d. ogrencinin kaldigi ders sayisi : %d\n", i+1, b[i]);
	
}