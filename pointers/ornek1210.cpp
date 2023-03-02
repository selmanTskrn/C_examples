#include <stdio.h>

void bileklikCoz( int, char *, int *, int *);

int main()
{
	long bileklik_no;
	char cinsiyet;
	int hafta;
	int sira_no;
	
	printf("Bileklik numarasini giriniz : ");
	scanf("%ld", &bileklik_no);
	
	bileklikCoz( bileklik_no, &cinsiyet, &hafta, &sira_no);
	
	printf("--------------------\n");
	printf("Cinsiyet (E:erkek, K:kiz)	: %c\n", cinsiyet);
	printf("Hafta   			: %d\n", hafta);
	printf("Sira numarasi 			: %d", sira_no);
	return 0;
}
void bileklikCoz( int num, char *cinsp, int *haftap, int *sira_nop)
{
	*sira_nop = num%100;
	num /= 100;
	
	*haftap = num%100;
	num /= 100;
	
	if ( num == 1)
		*cinsp = 'E';
	else if ( num == 2)
		*cinsp = 'K';
}