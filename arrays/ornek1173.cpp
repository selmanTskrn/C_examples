#include <stdio.h>

#define N 6
#define M 5

int main()
{
	int rota[N][M] = {0};
	int i, j, komut;
	
	printf("Robotun baslangic noktasini giriniz : ");
	scanf("%d%d", &i, &j);
	
	rota[i-1][j-1] = {1};
	i = i-1;
	j = j-1;
	printf("\n(Programi sonlandirmak icin 0 giriniz)"
	"\n(1:sag, 2:sol, 3:asagi, 4:yukari)"
	"\nKomutlarinizi giriniz : ");
	do {
		scanf("%d", &komut);
		switch (komut){
			case 1:
				j = j + 1;
				break;
			case 2:
				j = j - 1;
				break;
			case 3:
				i = i + 1;
				break;
			case 4:
				i = i - 1;
				break;
			default:
				break;
		}
		rota[i][j] = {1};
		
	}while ( komut != 0);
	printf("\nRobotun rotasi: \n");
	for ( i=0 ; i<N ; i++)
	{
		for ( j=0 ; j<M ; j++)
		{
			printf("%d ", rota[i][j]);
		}
		printf("\n");
	}
}