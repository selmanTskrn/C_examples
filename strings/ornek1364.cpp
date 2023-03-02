#include <stdio.h>
#include <string.h>

void devrikYap(char []);

int main()
{
	char cumle[150] = "baharda agaclar kuslar guzeldir";
	devrikYap(cumle);
	printf("\nDevrik cumle = %s", cumle);
	return 0;
}
void devrikYap(char cumle[])
{
	char ters[150];
	int i, j, len, bas, son;
	
	len = strlen(cumle);
	bas = len - 1;
	son = len - 1;
	j = 0;
	
	while ( 0 < bas)
	{
		if (cumle[bas] == ' '){
			i = bas + 1;
			while (i<=son)
			{
				ters[j] = cumle[i];
				i++;
				j++;
			}
			ters[j++] = ' ';
			son = bas - 1;
		}
		bas--;
	}
	for (i=0 ; cumle[i] != ' ' ; i++)
	{
		ters[j++] = cumle[i];
	}
	ters[j] = '\0';
	strcpy( cumle, ters);	
}