#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

int ara( int [][M], int, int *, int *);

int main()
{
	int dizi[N][M];
	int aranacak;
	int sat, sut;
	int i, j, test = 0;
	
	for ( i=0 ; i<N ; i++ )
	{
		for ( j=0 ; j<M ; j++ )
		{
			dizi[i][j] = rand()%9 + 1;
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("Dizi icerisinde aranacak degeri giriniz : ");
	scanf("%d", &aranacak);
	
	test = ara( dizi, aranacak, &sat, &sut);
	if ( test == 1){
		printf("Girilen deger dizi icerisinde vardir");
		printf("\nGirilen eleman bu dizinin %d. satir %d. sutununda bulunur", sat, sut);
	}
	else
		printf("Girilen deger dizi icerisinde yoktur");
		
}
int ara( int a[][M], int deger, int *satp, int *sutp)
{
	int i, j, test = 0;
	
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			if ( a[i][j] == deger){
				test = 1;
				*satp = i;
				*sutp = j;
				break;
			}
		}
	}
	return test;
}