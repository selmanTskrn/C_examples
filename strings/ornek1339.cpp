#include <stdio.h>
#include <ctype.h>
#include <string.h>

int checkAcronym( char[], char[]);

int main()
{
	char cumle[150];
	char acronym[10];
	
	printf("Cumleyi giriniz : ");
	fgets(cumle, 150, stdin);
	printf("Kisaltmayi giriniz : ");
	scanf("%s", acronym);
	
	printf("Sonuc = %d", checkAcronym( cumle, acronym));
	
	return 0;
}
int checkAcronym( char cumle[], char acronym[])
{
	int i, j=0, test=1;
	char yedek[10];
	
	for ( i=0 ; cumle[i] != '\0' ; i++)
	{
		if ( cumle[i-1] == ' ' || i == 0)
		{
			yedek[j] = toupper(cumle[i]);
			j++;
		}
	}
	yedek[j] = '\0';

	test = strcmp(yedek, acronym);
	if ( test == 1 || test == -1)
		return 0;
	else
		return 1;
}