#include <stdio.h>

void spacemask(char []);

int main()
{
	char sample[] = "This is a test";
	
	spacemask(sample);
	printf("%s", sample);
	return 0;
}
void spacemask(char sample[])
{
	int i;
	
	for ( i=0 ; sample[i] != '\0' ; i++)
	{
		if( sample[i] == ' ')
			sample[i] = '_';
	}
}