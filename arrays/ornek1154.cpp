#include <stdio.h>

int main()
{
	char strnc[8][8] = {
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'}};
	int sat, sut;
	int i, j;
	
	printf("Atin konumu (Once satir sonra sutun) : ");
	scanf("%d%d", &sat, &sut);
	printf("-------------------------------\n  ");
	
	strnc[sat][sut] = 'A';
	for ( i=-2; i<3 ; i++)
	{
		for (j=-2 ; j<3 ; j++)
		{
			if ( 0<=sat+i && 0<=sut+j && sat+i<9 && sut+j<9 && i!=0 && j!=0 && i!=j && i != -j)
				strnc[sat+i][sut+j] = '*';
		}
		
	}

	for ( i=0 ; i<8 ; i++)
		printf("%d ", i);
	printf("\n");
	
	for ( i=0 ; i<8 ; i++)
	{
		printf("%d ", i);
		for ( j=0 ; j<8 ; j++)
			printf("%c ", strnc[i][j]);
		
		printf("\n");
	}
}