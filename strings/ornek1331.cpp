#include <stdio.h>
#include <ctype.h>

void strtoupper( char [] );

int main()
{
	char sample[] = "This is a test";
	
	strtoupper( sample );
	printf("%s", sample);
	return 0;
}
void strtoupper( char sample[] )
{
	int i=0;
	
	while ( sample[i] != '\0'){
		if ( islower( sample[i] ) )
			sample[i] = toupper( sample[i] );
		i++;
	}
}
