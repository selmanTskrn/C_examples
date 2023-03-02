#include <stdio.h>

#define N 6
#define M 6
int main()
{
	int sehir[N][M] = {
	{0, 34, 55, 66, 23, 12},
	{32, 0, 12, 34, 56, 32},
	{56, 67, 0, 21, 45, 67},
	{21, 23, 54, 0, 12, 23},
	{34, 45, 54, 87, 0, 56},
	{12, 32, 43, 54, 45, 0}};
	
	int i, j, k;
	int yakin_sehir, en_yakin = 9999;
	
	printf("Bulundugunuz sehrin numarasini giriniz :");
	scanf("%d", &k);
	
	for ( i=0 ; i<M ; i++)
	{
		if ( i == k-1)
			continue;
		if ( sehir[k-1][i] < en_yakin){
			en_yakin = sehir[k-1][i];
			yakin_sehir = i+1;
		}
	}
	printf("Bulundugunuz sehire en yakin sehir : %d (%d km mesafede)", yakin_sehir, en_yakin);
}