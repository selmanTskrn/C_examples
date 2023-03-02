#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void zamanUret(char a);
int main()
{
	zamanUret('a');
}
void zamanUret(char a)
{
	int saat, dakika, saniye;
	srand(time(NULL));
	if (a=='s')
		saat = rand()%3 + 8;
	else if ( a=='o')
		saat = rand()%5 + 11;
	else if (a=='a')
		saat = rand()%7 + 16; 
	dakika = rand()%60;
	saniye = rand()%60;
	printf("%d:%d:%d", saat, dakika, saniye);
}