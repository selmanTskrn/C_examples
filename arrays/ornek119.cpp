#include <stdio.h>
#include <math.h>
int gunuBul( float [] , float );
int main()
{
	float toplam = 0, ortalama, altin[30];
	int i;
	
	printf("Altinin son 30 gunluk degerlerini giriniz : ");
	for ( i=0 ; i<30 ; i++){
		scanf("%f", &altin[i]);
		toplam = toplam + altin[i];
	}
	
	ortalama = toplam / 30;
	printf("------------------------------\n");
	
	printf("ortalama = %.2f", ortalama);
	printf("Altinin degeri ortalama degerden en cok ayin %d. gununde farklilik gostermistir. ", gunuBul ( altin, ortalama ));
	return 0;
}
int gunuBul( float a[], float ort )
{
	float fark=0;
	int i, enBuyuk;
	
	for ( i=0 ; i<30 ; i++)
	{
		if ( fabs(a[i] - ort) > fark ){
			enBuyuk = i+1 ;
			fark = a[i] - ort;
		}
	}
	return enBuyuk;
}