#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hangigun( char[] );

int main()
{
	char gun[12];
	
	printf("Gunun adini giriniz : ");
	scanf("%s", gun);
	
	printf("-----------------------------\n"
	"%s gunu haftanin %d. gunudur.", gun, hangigun( gun ));
	return 0;
}
int hangigun( char gun[])
{
	int i, k;
	
	for (i=0 ; gun[i] != '\0' ; i++)
	{
		if (isupper( gun[i] ))
			gun[i] = tolower( gun[i] );
	}
	
	switch (gun[0]){
		case 'p':
			if ( strcmp(gun, "pazar") == 0)
				k = 7;
			else if( strcmp(gun, "pazartesi") == 0)
				k = 1;
			else if ( strcmp(gun, "persembe") == 0)
				k = 4;
			break;
		case 's':
			k = 2;
			break;
		case 'c':
			if ( strcmp(gun, "carsamba") == 0)
				k = 3;
			else if ( strcmp(gun, "cuma") == 0)
				k = 5;
			else if ( strcmp(gun, "cumartesi") == 0)
				k = 6;
			break;
		default:
			printf("Yanlis !!!\n");
	}
	return k;
	
}