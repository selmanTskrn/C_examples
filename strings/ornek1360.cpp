#include <stdio.h>

void ntaneekle(char [], char [], int);

int main()
{
	char s1[10] = "Bil";
	char s2[10] = "gisayar";
	
	ntaneekle(s1,s2,2);
	printf("%s", s1);
	return 0;
}
void ntaneekle(char s1[], char s2[], int n)
{
	int i, j;
	
	while ( s1[i] != '\0')
		i++;
		
	for (j=0 ; j<n ; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	s1[i] = '\0';
}