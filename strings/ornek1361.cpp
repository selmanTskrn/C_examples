#include <stdio.h>

void buyukTamsayiTopla( char [], char [], char []);

int main()
{
	char s1[] = "9999999999999999999999999999999999999999";
	char s2[] = "111";
	char s3[42];
	
	buyukTamsyiTopla(s1, s2, s3);
	printf("%s",s3);
	return 0;
}
void buyukTamsayiTopla( char s1[], char s2[], char s3[])
{
	int i, len1, len2;
	
	len1 = strlen(s1);
	len2 = strlen(s2);
	
	for ( i=len1-1 , j=len2-1 ; 0<=i ; i--, j--)
	{
		
	}
}