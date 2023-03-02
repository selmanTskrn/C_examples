#include <stdio.h>
#include <ctype.h>

int main()
{
	char s[100];
	int i=0;
	
	printf("Dizgiyi giriniz : ");
	fgets(s, 100, stdin);
	
	printf("Sonuc dizgi : ");
	while ( s[i] != '\0') {
		if ( isupper( s[i] ) )
			printf("%c", tolower(s[i]));
		else if ( islower( s[i] ))
			printf("%c", toupper(s[i]));
		else
			printf("%c", s[i]);
		i++;
	}
	return 0;
}