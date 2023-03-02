#include <stdio.h>

int main()
{
	int a[3][3], sat[3] = {0}, sut[3] = {0};
	int i, j;
	
	for ( j=0 ; j<3 ; j++)
	{
		printf("a dizisinin %d. satiri : ", j+1);
		for ( i=0 ; i<3 ; i++)
			scanf("%d", &a[i][j]);
	}
	
	printf("---------------------------\n");
	
	for ( i=0 ; i<3 ; i++)
	{
		printf("\t");
		for ( j=0 ; j<3 ; j++)
		{
			printf("%d  ", a[j][i]);
			sat[i] += a[j][i];
			sut[j] += a[j][i];
		}
		
		printf("%d\n", sat[i]);
	}
	printf("\t-------\n\t");
	for ( i=0 ; i<3 ; i++)
		printf("%d  ", sut[i]);
}