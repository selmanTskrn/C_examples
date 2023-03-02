#include <stdio.h>
#include <string.h>

void fyazdir( char * );

int main()
{
	char isim[25];
	
	printf("Isim giriniz : ");
	scanf("%s", isim);
	
	fyazdir( isim );
	
	return 0;
}
void fyazdir( char *isimp )
{
	int i, j, len ;
	
	len = strlen(isimp);
	printf("*************\n");
	for ( i=0 ; i<len  ; i++)
	{
		for (j=0 ; j<len-i  ; j++)
		{
			printf("%c", *(isimp+j));
		}
		printf("\n");
	}
	
}