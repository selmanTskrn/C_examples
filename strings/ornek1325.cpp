#include <stdio.h>

int main()
{
	char siir[4][150];
	char akrostis[5];
	int i;
	
	puts("Siiri giriniz :");
	
	for ( i=0 ; i<4 ; i++)
	{
		fgets(siir[i], 150, stdin);
		akrostis[i] = siir[i][0];
	}
	akrostis[4] = '\0';
	puts("--------------------");
	
	printf("Akrostis : %s", akrostis);
	return 0;
}