#include <stdio.h>
#include <ctype.h>

void makeAcronym( char [], char []);

int main()
{
	char cumle[150];
	char acronym[20];
	
	printf("Cumleyi giriniz : ");
	fgets(cumle, 150, stdin);
	
	makeAcronym(cumle, acronym);
	printf("-----------------------\n"
	"Kisaltma : %s", acronym);
	
	return 0;
}
void makeAcronym( char cumle[], char acronym[])
{
	int i, j = 0;
	
	for ( i=0 ; cumle[i] != '\0' ; i++)
	{
		if ( cumle[i-1] == ' ' || i == 0)
		{
			acronym[j] = toupper(cumle[i]);
			j++;
		}
	}
	acronym[j] = '\0';
}
