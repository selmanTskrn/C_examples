#include <stdio.h>
#include <string.h>

void tekrarlayaniSil( char [] );

main()
{
	char dizgi[50];
	
	printf("Dizgiyi giriniz : ");
	fgets(dizgi, 50, stdin);
	
	tekrarlayaniSil(dizgi);
	printf("Son hali : %s", dizgi);
}
void tekrarlayaniSil( char dizgi[] )
{
	int i=0, j, len;
	len = strlen(dizgi);
	while ( i<len)
	{
		if ( dizgi[i] == dizgi[i+1]){
			for ( j=i+1 ; j<len ; j++)
			{
				dizgi[j] = dizgi[j+1];
			}
			i--;
			len--;
		}
		else
			i++;
		
	}
	
}