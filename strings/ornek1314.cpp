#include <stdio.h>
#include <ctype.h>

int main()
{
	char metin[255];
	char c;
	int i=0, otele;
	
	puts("Metin giriniz : ");
	while ( (c = getchar()) != '.'){
		metin[i++] = c;
	}
	metin[i] = '\0';

	printf("Oteleme miktari : ");
	scanf("%d", &otele);
	
	i=0;
	
	while ( metin[i] != '\0')
	{
		if ( metin[i] >= 'a' && metin[i] <= 'z'){
			metin[i] += otele;
			if (metin[i] > 'z')
				metin[i] -= ('z' - 'a') + 1;
				
		}
		else if ( metin[i] >= 'A' && metin[i] <= 'Z'){
			metin[i] += otele;
			if (metin[i] > 'Z')
				metin[i] -= ('Z' - 'A') + 1;
		}
		i++;
	}
	puts(metin);
	
	return 0;
}