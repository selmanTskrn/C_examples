#include <stdio.h>
#include <string.h>

void sagdansoldankes( char[], int, int);

int main()
{
	char kelime[20] = "Baskentliyiz";
	
	sagdansoldankes(kelime,3,5);
	printf("%s", kelime);
	return 0;
}
void sagdansoldankes( char kelime[], int n, int k)
{
	int i, j, len;
	
	len = strlen(kelime);
	kelime[len-k] = '\0';
	
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<len ; j++)
		{
			kelime[j] = kelime[j+1];
		}
	}
	
}
