#include <stdio.h>

int main()
{
	int a[3][3];
	
	int i, j, yedek;
	
	for ( i=0 ; i<3 ; i++)
	{
		printf("a dizisinin %d. satiri : ", i+1);
		for ( j=0 ; j<3 ; j++)
			scanf("%d", &a[i][j]);
	}
	printf("------------------------\n");
	printf("Cevrilmis Hali");
	
	for ( i=0 ; i<3 ; i++)
	{
		for ( j=0 ; j<3 ; j++)
		{
			if ( i>j ){
				yedek = a[j][i];
				a[j][i] = a[i][j];
				a[i][j] = yedek;
			}
		}
	}
	for ( i=0 ; i<3 ; i++)
	{
		printf("\n    ");
		for ( j=0 ; j<3 ; j++)
			printf("%d  ", a[i][j]);
	}
}