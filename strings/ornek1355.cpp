#include <stdio.h>

int strnkcmp( char[], char[], int, int);

main()
{
	char s1[] = "Baskentliler";
	char s2[] = "kent";
	int n=4, k=3;
	printf("%d", strnkcmp(s1, s2, n, k));
}
int strnkcmp( char s1[], char s2[], int n, int k)
{
	int i, j, test=1;
	
	for ( i=0 ; i<k ; i++)
	{
		if( s1[n+i-1] != s2[i])
			test = 0;
	}
	return test;
}