#include <stdio.h>

void emailBreak( char [], int , char []);

int main()
{
	char sample[] = "ali.yilmaz@hotmail.com";
	char str1[50], str2[50], str3[50];
	
	emailBreak(sample, 1, str1);
	emailBreak(sample, 2, str2);
	emailBreak(sample, 3, str3);
	
	printf("%s - %s - %s", str1, str2, str3);
	
	return 0;
}
void emailBreak(char sample[], int n, char str[])
{
	int i, k=0;
	
	for ( i=0 ; sample[i] != '@' ; i++)
	{
		if (n==1)
			str[i] = sample[i];
	}
	for (i++ ; sample[i] != '.' ; i++)
	{
		if(n==2){
			str[k] = sample[i];
			k++;
		}
	}
	for (i++; sample[i] != '\0' ; i++)
	{
		if(n==3){
			str[k] = sample[i];
			k++;
		}
			
	}
}
