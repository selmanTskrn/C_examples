#include <stdio.h>
#include <string.h>

void fazlaBoslukSil( char [] );

int main()
{
	char cumle[150];
	
	printf("Cumleyi giriniz : ");
	fgets(cumle, 150, stdin);
	
	fazlaBoslukSil( cumle);
	
	printf("%s", cumle);
	return 0;
}
void fazlaBoslukSil( char cumle[] )
{
	int i, j, len;
	
	len = strlen(cumle);
	
	for ( i=0 ; i<len ; i++)
	{
		if (cumle[i] == ' ' && cumle[i-1] == ' ')
		{
			for ( j=i ; j<len ; j++)
			{
				cumle[j] = cumle[j+1];
			}
			i--;
		}
	}
}