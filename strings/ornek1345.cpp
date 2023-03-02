#include <stdio.h>
#include <ctype.h>

float stof( char []);

int main()
{
	char dizgi[20];
	
	printf("Sayisal icerikli dizgi : ");
	scanf("%s", dizgi);
	
	printf("Sayisal icerikli dizgi : %.2f", stof( dizgi ));
	return 0;
}
float stof( char dizgi[] )
{
	int i=0;
	float k=0, j = 10;
	
	for ( i=0 ; 48 <= dizgi[i] && dizgi[i] <= 57 ; i++)
	{
		k = 10*k + (dizgi[i]-48);
	}
	i++;
	while( 48 <= dizgi[i] && dizgi[i] <= 57 )
	{
		k = k + (dizgi[i] - 48)/j;
		j = j*10;
		i++;
	}
	return k;
}