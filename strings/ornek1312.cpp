#include <stdio.h>

int main()
{
	char s[50];
	int sayi;
	int i, j, k=0;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	j = sayi / 100;
	for ( i=1 ; i<=j ; i++)
	{
		s[k] = 'Z';
		k++;
	}
	sayi = sayi%100;
	j = sayi / 10;
	for ( i=1 ; i<=j ; i++)
	{
		s[k] = 'U';
		k++;
	}
	sayi = sayi%10;
	for ( i=1 ; i<=sayi ; i++){
		s[k] = 'I';
		k++;
	}
	s[k] = '\0';
	printf("Ozel sayi sistemindeki karsiligi : %s", s);
	return 0;
}