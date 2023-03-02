#include <stdio.h>
#include <ctype.h>
void sezar( char [], char [], int );

main()
{
	char s1[] = "red fox";
	char s2[50];
	
	sezar(s1, s2, 3);
	
	printf("Sifreli hali : %s",s2);
}
void sezar( char s1[], char s2[], int n)
{
	int i;
	
	for (i=0 ; s1[i] != '\0' ; i++)
	{
		if (isalpha(s1[i])){
			s2[i] = s1[i] + n;
			if ( s2[i]>122)
				s2[i] -= 26;
		}
		else 
			s2[i] = s1[i];
		
	}
}