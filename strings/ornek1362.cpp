#include <stdio.h>
#include <string.h>

void bulcikar( char [], char []);

int main()
{
	char kelime[] = "Kamuran";
	char s[] = "mur";
	
	bulcikar( kelime, s);
	printf("%s\n", kelime);
	return 0;
}
void bulcikar( char kelime[], char s[])
{
	int i, j, test;
	int len1, len2;
	
	len1 = strlen( kelime );
	len2 = strlen( s );
	
	for (i=0 ; i<len1 ; i++)
	{
		test = 0;
		for ( j=0 ; j<len2 ; j++)
		{
			if ( kelime[i+j] == s[j])
				test++;
		}
		if(test==len2){
			
			for ( j=0 ; j<len2 ; j++)
			{
				test = i;
				while(kelime[test] != '\0')
				{
					kelime[test] = kelime[test+1];
					test++;
				}
			}
			break;
		}		
	}
}