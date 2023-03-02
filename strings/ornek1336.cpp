#include <stdio.h>
#include <string.h>

void cogulYap( char [], char []);

int main()
{
	char string1[80] = "fly", string2[80];
	char string3[20] = "dish", string4[20];
	char string5[20] = "chair", string6[20];
	
	cogulYap(string1, string2);
	cogulYap(string3, string4);
	cogulYap(string5, string6);
	printf("%s cogulu :  %s\n%s cogulu :  %s\n%s cogulu :  %s", string1, string2,string3, string4, string5, string6);
	return 0;
}
void cogulYap( char str1[], char str2[])
{
	int i, len;
	
	len = strlen(str1);
	
	if ( str1[len-1] == 'y')
	{
		strcpy(str2, str1);
		str2[len] = '\0';
		strcat(str2, "ies");
	}
	else if ( str1[len-1] == 's')
	{
		strcpy(str2, str1);
		strcat(str2, "es");
	}
	else if ( str1[len-1] == 'h')
	{
		if (str1[len-2] == 's' || str1[len-2] == 'c')
		{
			strcpy(str2, str1);
			strcat(str2, "es");
		}	
	}
	else {
		strcpy(str2, str1);
		str2[len] = 's';
		str2[len+1] = '\0';
	}
}