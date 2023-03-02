#include <stdio.h>

int main()
{
	int a[5][4];
	int i, j;
	int toplam, enAz, kuyu;
	
	printf("Katmalarin sertlik miktarini giriniz ");
	for ( i=0 ; i<5 ; i++)
	{
		printf("\n%d. katman (1.kuyudan 4. kuyuya dogru) : ", i+1);
		for ( j=0 ; j<4 ; j++)
			scanf("%d", &a[i][j]);
	}
	enAz = 99999;
	for ( j=0 ; j<4 ; j++)
	{
		toplam = 0;
		for ( i=0 ; i<5 ; i++)
		{
			toplam += a[i][j];
		}
		if ( toplam<enAz ){
			enAz = toplam;
			kuyu = j+1;
		}
	}
	i = 0;
	toplam = 0;
	while( 1 )
	{
		toplam += a[i][kuyu-1];
		if( toplam>10)
			break;
		i++;
	}
	printf("Burgu %d. Kuyunun %d. Katmaninda dagistirilir.", kuyu, i+1);
}