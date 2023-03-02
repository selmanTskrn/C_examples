#include <stdio.h>
#include <stdlib.h>

#define N 8
#define M 8
char tankHangiYoneGitmeli( int [][M], int, int, int );
int main()
{
	int a[N][M];
	int i, j, k;
	int sat, sut;
	
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			a[i][j] = rand()%3;
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Tankin konumunu ve hangi oyuncuya ait oldugunu giriniz : ");
	scanf("%d%d%d", &sat, &sut, &k);
	printf("%c", tankHangiYoneGitmeli( a, sat, sut, k));
}
char tankHangiYoneGitmeli( int a[][M], int sat, int sut, int deger)
{
	int enCok = 0;
	int k=0, g=0, d=0, b=0;
	int i, j;
	char yon;
	
	for( i=0 ; i<sat ; i++)
		if ( a[i][sut] == 3-deger )
			k++;
	
	for ( i=sat+1 ; i<N ; i++)
		if ( a[i][sut] == 3-deger )
			g++;
	
	for ( j=0 ; j<sut ; j++)
		if ( a[sat][j] == 3-deger )
			b++;		
	
	for ( j=sut+1 ; j<M ; j++)
		if ( a[sat][j] == 3-deger )
			d += a[sat][j];
	
	enCok = k;
	yon = 'k';
	if ( enCok < g){
		enCok = g;
		yon = 'g';
	}
	if ( enCok < b ){
		enCok = b;
		yon = 'b';
	}
	if ( enCok < d ){
		enCok = d;
		yon = 'd';
	}
	return yon;
}