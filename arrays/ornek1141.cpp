// 2. dizideki harflerin 1. icerisinde var olma ihtimali
#include <stdio.h>
float varOlmaOrani( char[], int, char[], int);
int main()
{
	char kelime[6] = {'i','s','t','i','f','a'};
	char inceUnlu[4] = {'e','i','o','u'};
	float c;
	c = varOlmaOrani( kelime, 6, inceUnlu, 4);
	printf("Var olma orani = %.2f", c);
}
float varOlmaOrani( char a[], int n1, char b[], int n2)
{
	int i, j;
	float sonuc = 0;

	for ( j=0 ; j<n2 ; j++)
	{
		for ( i=0 ; i<n1 ; i++)
		{
			if ( b[j] == a[i] ){
				sonuc++;
				break;
			}
		}
	}
	return sonuc/n2;
}