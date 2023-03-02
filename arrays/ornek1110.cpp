#include <stdio.h>

int main()
{
	int lamba[50];
	int i, j, bolum;
	
	for ( i=0 ; i<50 ; i++)
	{
		lamba[i] = i+1;
	}
	printf("Yanik lambalar : \n");
	for ( i=0 ; i<50 ; i++)
	{
		bolum=0;
		for ( j=1 ; j<11 ; j++)
		{
			if ( lamba[i]%j == 0)
				bolum++;
		}
		if ( bolum%2 == 1)
			printf("%d, ", lamba[i]);
	}
	printf("\nSonuk lambalar : \n");
	for ( i=0 ; i<50 ; i++)
	{
		bolum=0;
		for ( j=1 ; j<11 ; j++)
		{
			if ( lamba[i]%j == 0)
				bolum++;
		}
		if ( bolum%2 == 0)
			printf("%d, ", lamba[i]);
	}
	return 0;
}