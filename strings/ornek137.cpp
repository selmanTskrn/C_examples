#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	int l, i=0, test=0;
	
	printf("Dizgiyi giriniz : ");
	scanf("%s", s);
	
	l = strlen(s);
	
	while ( s[i] != '\0'){
		if ( s[i] != s[l-i-1])
			test = 1;
		i++;
	}
	if ( test )
		printf("Palindrome degildir");
	else 
		printf("Palindrome dur");
	return 0;
}