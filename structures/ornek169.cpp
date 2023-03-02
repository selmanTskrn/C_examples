#include <stdio.h>
typedef struct musteri{
	int sira;
	char adsoyad[40];
	char tel[20];
	float borc;
	char cins;
}Musteri;
void sirala( Musteri *, Musteri *, Musteri *);
int main()
{
	Musteri a1 = {2, "Ahmet Terk", "2541", 12.5, 'E'};
	Musteri a2 = {5, "Oya Git", "1425", 4.3, 'K'};
	Musteri a3 = {5, "Selim Demir", "4568", 18.3, 'K'};
	
	printf("Sira : %d\nAd Soyad : %s\nTel : %s\nBorc : %.2f\nCinsiyet : %c\n",
	a1.sira, a1.adsoyad, a1.tel, a1.borc, a1.cins);
	printf("\nSira : %d\nAd Soyad : %s\nTel : %s\nBorc : %.2f\nCinsiyet : %c\n",
	a2.sira, a2.adsoyad, a2.tel, a2.borc, a2.cins);
	printf("\nSira : %d\nAd Soyad : %s\nTel : %s\nBorc : %.2f\nCinsiyet : %c\n",
	a3.sira, a3.adsoyad, a3.tel, a3.borc, a3.cins);
	
	sirala( &a1, &a2, &a3);
	printf("\n------Siralama Sonrasi--------\n");
	
	printf("\nSira : %d\nAd Soyad : %s\nTel : %s\nBorc : %.2f\nCinsiyet : %c\n",
	a1.sira, a1.adsoyad, a1.tel, a1.borc, a1.cins);
	printf("\nSira : %d\nAd Soyad : %s\nTel : %s\nBorc : %.2f\nCinsiyet : %c\n",
	a2.sira, a2.adsoyad, a2.tel, a2.borc, a2.cins);
	printf("\nSira : %d\nAd Soyad : %s\nTel : %s\nBorc : %.2f\nCinsiyet : %c\n",
	a3.sira, a3.adsoyad, a3.tel, a3.borc, a3.cins);
	
	return 0;
}
void sirala( Musteri *ptr1, Musteri *ptr2, Musteri *ptr3)
{
	Musteri yedek;
	
	if ((*ptr1).borc > (*ptr2).borc){
		yedek = (*ptr1);
		(*ptr1) = (*ptr2);
		(*ptr2) = yedek;
	}
	if ((*ptr2).borc > (*ptr3).borc){
		yedek = (*ptr2);
		(*ptr2) = (*ptr3);
		(*ptr3) = yedek;
	}
	if ((*ptr1).borc > (*ptr2).borc){
		yedek = (*ptr1);
		(*ptr1) = (*ptr2);
		(*ptr2) = yedek;
	}
}