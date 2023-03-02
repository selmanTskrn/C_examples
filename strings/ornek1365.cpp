#include <stdio.h>
#include <string.h>

int sonundaVarmi( char [], char []);

int main()
{
	char s1[] = "A bulbul neden kondun dalimdaki asmaya";
	char s2[] = "asmaya";
	
	printf("%d", sonundaVarmi(s1,s2));
	
	return 0;
}
int sonundaVarmi( char s1[], char s2[])
{
	int len1, len2, test = 1;
	
	len1 = strlen(s1);
	len2 = strlen(s2);
	
	while (len1 != 0 && len2 != 0 )
	{
		if ( s1[len1] != s2[len2] ){
			test = 0;
		}
		len1--;
		len2--;
	}
	
	return test;
}
