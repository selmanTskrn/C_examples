#include <stdio.h>
#include <ctype.h>
#include <string.h>

int hangiay( char []);

int main()
{
	char ay[20];
	
	printf("Ayin adi : ");
	scanf("%s", ay);
	
	printf("-------------------\n");
	printf("%s ayi yilin %d. ayidir.", ay, hangiay( ay ));
	return 0;
}
int hangiay( char ay[])
{
	int k, i;
	
	for (i=0 ; ay[i] != '\0' ; i++)
	{
		if (isupper( ay[i] ))
			ay[i] = tolower( ay[i] );
	}
	
	if ( ay == "ocak")
		k = 1;
	else if( strcmp( ay, "subat")==0)
		k = 2;
	else if( strcmp( ay, "mart")==0)
		k = 3;
	else if( strcmp( ay, "nisan")==0)
		k = 4;
	else if( strcmp( ay, "mayis")==0)
		k = 5;
	else if( strcmp( ay, "haziran")==0)
		k = 6;
	else if( strcmp( ay, "temmuz")==0)
		k = 7;
	else if( strcmp( ay, "agustos")==0)
		k = 8;
	else if( strcmp( ay, "eylul")==0)
		k = 9;
	else if( strcmp( ay, "ekim")==0)
		k = 10;
	else if( strcmp( ay, "kasim")==0)
		k = 11;	
	else if( strcmp( ay, "aralik")==0)
		k = 12;
	else 
		return 0;
	return k;
}