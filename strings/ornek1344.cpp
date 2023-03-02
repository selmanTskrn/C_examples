#include <stdio.h>

int stoi( char []);

int main()
{
	char dizgi[20];
	
	printf("Sayisal icerikli dizgi : ");
	scanf("%s", dizgi);
	
	printf("Sayisal karsiligi : %d", stoi( dizgi));
	return 0;
}
int stoi(char dizgi[])
{
	int i, k=0;
	
	for ( i=0 ; 48 <= dizgi[i] && dizgi[i] <= 57 ; i++)
	{
		k = 10*k + (dizgi[i]-48);
	}
	return k;
}