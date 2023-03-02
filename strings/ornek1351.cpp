#include <stdio.h>
#include <string.h>

int rakamTopla( char []);

int main()
{
	char cumle[150] = "MAT152 dersini 3uncu kez alan Cemil arasinavdan 90 aldi";
	
	printf("Cumleyi giriniz : %s", cumle);
	printf("\nCumledeki rakamlarin toplami = %d", rakamTopla( cumle));
	return 0;
}
int rakamTopla( char cumle[])
{
	int i, toplam=0;
	
	for (i=0 ; cumle[i] != '\0' ; i++)
	{
		if( 48<=cumle[i] && cumle[i]<=57)
			toplam += cumle[i] - 48;
	}
	return toplam;
}