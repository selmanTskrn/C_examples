#include <stdio.h>
#include <string.h>

int ikilidenOnluya( char []);

int main()
{
	char ikilik[17];
	
	printf("Ikilik sayiyi giriniz : ");
	scanf("%s", ikilik);
	
	printf("%s = %d", ikilik, ikilidenOnluya( ikilik ));
	return 0;
}
int ikilidenOnluya( char ikilik[] )
{
	int i, j=1, k=0, len;
	
	len = strlen(ikilik);
	
	for ( i=len-1 ; 0<=i ; i--)
	{
		k += (ikilik[i]-48) * j;
		j = j * 2;
	}
	return k;
}