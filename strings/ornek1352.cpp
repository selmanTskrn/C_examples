#include <stdio.h>
#include <string.h>

void yapistirnk( char [], int , int , char[]);

main()
{
	char s1[] = "Bilgisayar Arasinav";
	char s2[] = "102 Dersi";
	
	yapistirnk( s1, 12, 3, s2);
	printf("%s", s1);
	
}
void yapistirnk( char s1[], int k, int n, char s2[])
{
	int i, j=0;
	for ( i=k-1 ; i<k-1+n ; i++)
	{
		s1[i] = s2[j];
		j++;
	}
}