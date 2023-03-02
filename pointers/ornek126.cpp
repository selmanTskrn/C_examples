#include <stdio.h>

void tekCiftSay( int , int *, int *);

int main()
{
	long sayi;
	int tek = 0, cift = 0;
	
	printf("Sayiyi giriniz : ");
	scanf("%ld", &sayi);
	
	tekCiftSay( sayi , &tek, &cift);
	
	printf("----------------------------\n");
	printf("%ld sayisinda %d adet tek, %d adet cift rakam vardir.", sayi, tek, cift);
	
	return 0;
}
void tekCiftSay( int sayi, int *tekp, int *ciftp)
{
	while ( sayi != 0){
		if ((sayi%10)%2 == 0)
			*ciftp = *ciftp + 1;
		else
			*tekp = *tekp + 1;
		sayi = sayi / 10;
	}
}