#include <stdio.h>

int checkMorseBahr( char[], char[]);

int main()
{
	char morse[150];
	char bahr[150];
	
	printf("Morseyi giriniz : ");
	fgets(morse, 150, stdin);
	
	printf("Bahr giriniz : ");
	fgets(bahr, 150, stdin);
	
	printf("Sonuc : %d", checkMorseBahr( morse, bahr));
	return 0;
	
}
int checkMorseBahr( char morse[], char bahr[])
{
	int i, j=0, test=1;
	
	for ( i=0 ; morse[i] != '\0' ; i++)
	{
		if ( morse[i] == '-'){
			if(bahr[j] != 'd' || bahr[j+1] != 'a'){
				test = 0;
			}
			j = j + 2;
		}
		else if ( morse[i] == '.'){
			if(bahr[j] != 'd' || bahr[j+1] != 'i'){
				test = 0;
			}
			j = j + 2;
		}
		else if (morse[i] == ' '){
			if ( bahr[j] != ' '){
				test = 0;
				j--;
			}
			j++;
		}
		
	}
	return test;
}