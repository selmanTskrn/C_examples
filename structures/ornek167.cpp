#include <stdio.h>
typedef struct tarih{
	int gun;
	int ay;
	int yil;
} Tarih;
Tarih buyukOlaniBul( Tarih , Tarih );
int main()
{
	Tarih a1;
	Tarih a2;
	Tarih a3;
	
	printf("1. tarihi giriniz : ");
	scanf("%d%d%d", &a1.gun, &a1.ay, &a1.yil);
	printf("2. tarihi giriniz : ");
	scanf("%d%d%d", &a2.gun, &a2.ay, &a2.yil);
	
	a3 = buyukOlaniBul( a1, a2 );
	printf("Girilen iki tarihten daha ileri olan %d/%d/%d dir", a3.gun, a3.ay, a3.yil);
	scanf("%d%d%d", &a3.gun, &a3.ay, &a3.yil);
	return 0;
}
Tarih buyukOlaniBul( Tarih a1, Tarih a2)
{
	Tarih sonuc;
	sonuc = a1;
	if ( a1.yil < a2.yil){
		sonuc = a2;
	}
	else if (a1.yil == a2.yil){
		if ( a1.ay < a2.ay ){
			sonuc = a2;
		}
		else if ( a1.ay == a2.ay){
			if (a1.gun < a2.gun){
				sonuc = a2;
			}
		}
	}
	return sonuc;
}