#include <stdio.h>
#include <string.h>

int aynimi( char[], char[] );

int main()
{
	char cumle1[25];
	char cumle2[25];
	
	printf("cumle 1: ");
	scanf("%s", cumle1);
	
	printf("cumle 2: ");
	scanf("%s", cumle2);
	
	printf("%d", aynimi(cumle1, cumle2));
	return 0;
}
int aynimi( char *c1, char *c2)
{
	int i, len1, len2, test = 1;
	
	len1 = strlen(c1);
	len2 = strlen(c2);
	
	
	if (len1 != len2){
		printf("%d-%d\n", len1, len2);
		test = 0;
	}

	
	for (i=0 ; i<len1  ; i++)
	{
		if (*(c1+i) != *(c2+i)){
			test = 0;
		}
			
	}
	return test;
	
	
}