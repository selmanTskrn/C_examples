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
	
	int i, j, toplam = 0;
	int satsut;
	
	do {
		printf("Yolculuk bilgisi giriniz (Durdurmak icin 0) : ");
		scanf("%d", &satsut);
		if ( satsut != 0){
			toplam += sehir[(satsut/10)+1][(satsut%10)+1];
		}
	} while ( satsut != 0);
	
	printf("Toplam katedilen yol : %d km", toplam);
}