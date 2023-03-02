#include <stdio.h>

void morse2Bahr( char[], char[]);

int main()
{
	char morse[150];
	char bahr[150];
	
	printf("Morse kodunu giriniz : ");
	fgets(morse, 150, stdin);
	
	morse2Bahr( morse , bahr);
	
	printf("Bahr kodu : %s", bahr);
	return 0;
	
}
void morse2Bahr( char morse[], char bahr[])
{
	int i, j=0;
	
	for ( i=0 ; morse[i] != '\0' ; i++)
	{
		if ( morse[i] == '-'){
			bahr[j++] = 'd';
			bahr[j++] = 'a';
		}
		else if ( morse[i] == '.'){
			bahr[j++] = 'd';
			bahr[j++] = 'i';
		}
		else if ( morse[i] == ' '){
			bahr[j++] = ' ';
		}
	}
}