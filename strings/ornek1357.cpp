#include <stdio.h>

void ntanekopyala( char [], char [], int);

int main()
{
	char s1[10], s2[11] = "Bilgisayar";
	
	ntanekopyala(s1,s2,5);
	printf("%s", s1);
	return 0;
}
void ntanekopyala( char s1[], char s2[], int n)
{
	int i;
	
	for( i=0 ; i<n ; i++)
	{
		s1[i] = s2[i];
	}
	s1[n] = '\0'; 
}