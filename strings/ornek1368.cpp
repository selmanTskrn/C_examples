#include <stdio.h>
#include <string.h>

int tekrarEdenKacTane( char []);

int main()
{
	char s[] = "Bilgisayar";
	
	printf(" %d \n", tekrarEdenKacTane(s));
	return 0;
}
int tekrarEdenKacTane( char s[])
{
	int i, j, test, k;
	char yedek[10];
	
	for ( i=0 ; s[i] != '\0' ; i++)
	{
		for ( j=i+1 ; s[j] != '\0' ; j++)
		{
			if ( s[i] == s[j]){
				test = 1;
				for (k=0 ; yedek[k] != '\0' ; k++)
				{
					if(yedek[k] == s[j])
						test = 0;
				}
				if (test){
					yedek[k++] = s[j];
					yedek[k] = '\0';
				}
			}
		}
	}
	
	return strlen(yedek);
}