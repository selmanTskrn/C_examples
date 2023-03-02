#include <stdio.h>

void googleAra(int *, int, int);

int main()
{
	int dizi[9] = {1,3,4,6,12,25,56,110,120};
	int i;
	int aranan;
	
	googleAra(dizi, 9, 12);
	googleAra(dizi, 9, 12);
	
	for ( i=0 ; i<9 ; i++)
		printf("%d, ", dizi[i]);
	return 0;
}
void googleAra( int *dizip, int n , int num)
{
	int i, yedek;
	
	for ( i=1 ; i<n ; i++){
		if ( *(dizip+i) == num){
			yedek = *(dizip+i);
			*(dizip+i) = *(dizip+i-1);
			*(dizip+i-1) = yedek;
		}
	}
}