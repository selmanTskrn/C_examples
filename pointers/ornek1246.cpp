#include <stdio.h>

void torpilYap(int *, int , int, int);

int main()
{
	int dizi[9] = {1,3,4,6,12,25,56,110,120};
	int i;
	
	torpilYap(dizi,9,8,2);
	for ( i=0 ; i<9 ; i++)
		printf("%d, ", dizi[i]);
	return 0;
}
void torpilYap(int *dizip, int n, int i1, int i2)
{
	int i, yedek, num;
	num = *(dizip+i1-1);
	
	for ( i=i2-1 ; i<n ; i++)
	{
		yedek = *(dizip+i);
		*(dizip+i) = num;
		num = yedek;
	}
}