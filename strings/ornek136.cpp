#include <stdio.h>
#include <ctype.h>

int main()
{
	char s[100];
	int i=1;
	
	printf("Dizgiyi giriniz : ");
	fgets(s, 100, stdin);
	
	if ( isalpha( s[0] ))
		s[0] = toupper( s[0] );
		
	while ( s[i] != '\0'){
		if ( s[i-1] == ' ' )
			s[i] = toupper( s[i] );
		else
			s[i] = tolower( s[i] );
		i++;
	}
	printf("Sonuc dizgi : %s", s);
	
	return 0;
}