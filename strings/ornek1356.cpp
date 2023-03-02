#include <stdio.h>
#include <string.h>

int kacinci( char [], char []);

int main()
{
	char s1[] = "Bil102 final sinavi bitti";
	char s2[] = "sinavi";
	
	printf("%s \n dizgisinde %s dizgisi %d. kelimededir.",
	s1,s2,kacinci(s1,s2));
	
	return 0;

}
int kacinci( char s1[], char s2[])
{
	int i, j, test, adet=1;
	int len1, len2;
	
	len1 = strlen( s1 );
	len2 = strlen( s2 );
	
	for (i=0 ; i<len1 ; i++)
	{
		test = 0;
		for ( j=0 ; j<len2 ; j++)
		{
			if ( s1[i+j] == s2[j])
				test++;
		}
		if(test==len2)
			break;
	}
	for ( j=0 ; j<i ; j++)
	{
		if(s1[j]==' ')
			adet++;
	}
	return adet;
}