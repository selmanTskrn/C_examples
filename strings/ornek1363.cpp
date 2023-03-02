#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrome(char []);

int main()
{
	char cumle[250];
	
	printf("Cumleyi giriniz : ");
	fgets(cumle, 250, stdin);
	
	if(palindrome(cumle) == 1)
		printf("Bu cumle bir palindrome dur.");
	else
		printf("Bu cumle bir palindrome degildir.");
	return 0;
}
int palindrome(char cumle[])
{
	int i, j=0, len=0;
	char harfler[250];
	
	
	for ( i=0 ; cumle[i] != '\0' ; i++)
	{
		if(isalnum(cumle[i])){
			harfler[j++] = tolower(cumle[i]);
			len++;
		}
	}
	for ( i=0 ; i<len ; i++)
	{
		if(harfler[i] != harfler[len-i-1]){
			break;
		}
			
	}

	if(i == len)
		return 1;
	else 
		return 0;
	
}