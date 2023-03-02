#include <stdio.h>

#define SUTUN 4

int tekdencifte( int [], int, int [][SUTUN]);

int main()
{
	int cift[3][SUTUN] = {
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 10, 11, 12}};
	
	int tek[5] = {13, 14, 15, 16, 17}, c;
	
	c = tekdencifte( tek, 5, cift, );
	printf("%d", c);
	return 0;
}
int tekdencifte(int tek[], int n, int cift[][SUTUN])
{
	int i;
	for ( i=0 ; i<n ; i++)
	{
		cift[4][i] = tek[i];
	}
	if (cift[4][n-1]==tek[n-1])
		return 1;
	else 
		return 0;
}
