#include <stdio.h>

int araSondan( char [], int , char );

int main()
{
	char dizi[8] = {'a','n','k','a','r','a','l','i'};
	printf("%d", araSondan(dizi, 8, 'a'));
	printf("\n%d", araSondan(dizi, 8, 'a'));
	printf("\n%d", araSondan(dizi, 8, 'a'));
	printf("\n%d", araSondan(dizi, 8, 'a'));

	return 0;
}
int araSondan( char dizi[], int n, char c)
{
	int i;
	
	for (i=n-1 ; 0<=i ; i--)
	{
		if ( dizi[i] == c){
			dizi[i] = '\0';
			break;
		}
	}
	if (dizi[i+1] >0)
		return i;
	else 
		return -1;
}