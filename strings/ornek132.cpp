#include <stdio.h>

int main()
{
	char cumle[255];
	char c;
	int i = 0, alarinSayisi = 0;
	
	puts("Cumlenizi giriniz : ");
	fgets(cumle, 255, stdin);
	
	while ( cumle[i] != '\0')
	{
		if ( cumle[i] == 'a' || cumle[i] == 'A')
			alarinSayisi++;
		i++;
	}
	printf("Girdiginiz cumlede %d adet a ya da A vardir.", alarinSayisi);
	return 0;
}