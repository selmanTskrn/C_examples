#include <stdio.h>
#include <locale.h>

int main()
{
	char s[100];
	int i = 0;
	int ince = 0, kalin = 0;
	
	printf("Dizgiyi giriniz : ");
	scanf("%s", s);
	
	while ( s[i] != '\0'){
		if ( s[i] == 'a' || s[i] == 'ı' ||s[i] == 'o' ||s[i] == 'u'){
			kalin++;
		}
		if (s[i] == 'e' || s[i] == 'i' || s[i] == 'ö' || s[i] == 'ü' ){
			ince++;
		}
		i++;
	}
	if (kalin == 0 || ince == 0)
		printf("Buyuk sesli uyumuna uyar");
	else
		printf("Buyuk sesli uyumuna uymaz");
	return 0;
}