#include <stdio.h>
typedef struct ogrenci{
	char num[15];
	float ort;
	int kredi;
	int girisYil;
} Ogrenci;
Ogrenci basariliOlaniBul( Ogrenci , Ogrenci );
int main()
{
	Ogrenci a1, a2, a3;
	
	printf("Birincinin no, ortalama, kredi toplami ve giris yili : \n");
	scanf("%s%f%d%d", &a1.num, &a1.ort, &a1.kredi, &a1.girisYil);
	
	printf("Ikincinin no, ortalama, kredi toplami ve giris yili : \n");
	scanf("%s%f%d%d", &a2.num, &a2.ort, &a2.kredi, &a2.girisYil);
	
	a3 = basariliOlaniBul( a1, a2);
	
	printf("Daha basarili olan, %s numarali\n(Ortalama : %.2f, kredi toplami : %d, yili : %d)"
	, a3.num, a3.ort, a3.kredi, a3.girisYil);
	return 0;
}
Ogrenci basariliOlaniBul( Ogrenci a1, Ogrenci a2)
{
	if ( a1.ort > a2.ort)
		return a1;
	else if ( a1.ort < a2.ort )
		return a2;
	else {
		if (a1.kredi < a2.kredi)
			return a1;
		else if ( a1.kredi > a2.kredi)
			return a2;
		else {
			if ( a1.girisYil > a2.girisYil)
				return a1;
			else
				return a2;
		}
			
	}
}