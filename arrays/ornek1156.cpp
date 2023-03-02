#include <stdio.h>

int main()
{
	int a[5][4];
	int i, j;
	int toplam, enCok, kanal;
	enCok = 0;
	
	printf("Kanaldaki peynir miktarlarini giriniz \n");
	for ( i=0 ; i<5 ; i++)
	{
		printf("%d. Kanal :", i+1);
		toplam = 0;
		for ( j=0 ; j<4 ; j++)
		{
			scanf("%d", &a[i][j]);
			toplam += a[i][j];
		}
		if ( toplam>enCok ){
			enCok = toplam;
			kanal = i+1;
		}
	}
	i=0;
	toplam = 0;
	while( 1 )
	{
		toplam += a[kanal-1][i];
		if( toplam>5)
			break;
		i++;
	}
	printf("Kanal faresi %d. Kanalin %d. Bolgesinde uyuya kaldi %d", kanal, i+1);
	
}