#include <stdio.h>

int main()
{
	int a[5], b[5], c[5];
	int i, j;
	
	printf("1. dizinin elemanlari : ");
	for ( i=0 ; i<5 ; i++)
		scanf("%d", &a[i]);
	
	printf("2. dizinin elemanlari : ");
	for ( i=0 ; i<5 ; i++)
		scanf("%d", &b[i]);
	
	printf("Elemanlarin toplami olan dizi : ");
	for ( i=0 ; i<5 ; i++)
	{
		c[i] = a[i] + b[i];
		printf("%d ", c[i]);
	}
	printf("%x %p %x %p", &c[0], &c[1], &c[2], &c[3]);
}