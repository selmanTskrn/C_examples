// diziyi tersine cevirme
#include <stdio.h>

int main()
{
	int a[10] = { 4, 5, 6, 2, 3, 1, 8, 9, 2, 10 };
	int i, j, yedek;

	for ( i=0 ; i<5 ; i++){
		j = 9-i;
		yedek = a[i];
		a[i] = a[j];
		a[j] = yedek;;
	}
	for ( i=0 ; i<10 ; i++)
		printf("%d, ", a[i]);
}