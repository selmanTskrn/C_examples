#include <stdio.h>

int main()
{
	int buyuk, kucuk;
	int buyuk_yuksek=0, buyuk_normal=0, buyuk_dusuk=0, kucuk_dusuk=0, kucuk_normal=0, kucuk_yuksek=0;

	printf("Tansiyon olcum programina hosgeldiniz"
	"\n(Durdurmak icin herhangi bir degeri sifir giriniz)");
	
	printf("\n\nTansiyon degerlerini giriniz (Buyuk ve kucuk) : ");
	scanf("%d%d", &buyuk, &kucuk);
 	
	 while ( buyuk>0 && kucuk>0){
	
		printf("Buyuk ");
		
		if (buyuk<120 ){
			buyuk_dusuk++;
			printf("dusuk");
		}
		else if (buyuk<=140){
			buyuk_normal++;
			printf("normal");
		}
		else if (buyuk>140){
			buyuk_yuksek++;
			printf("yuksek");
		}
		
		printf(", kucuk ");
		if (kucuk<70 ){
			kucuk_dusuk++;
			printf("dusuk");
		}
		else if (kucuk<=90){
			kucuk_normal++;
			printf("normal");
		}
		else if (kucuk>90){
			kucuk_yuksek++;
			printf("yuksek");
		}
		printf("\n\nTansiyon degerlerini giriniz (Buyuk ve kucuk) : ");
		scanf("%d%d", &buyuk, &kucuk);
	}
	printf("\nProgram sona erdi");
	printf("\nBuyuk (Normal = %d , Yuksek = %d , Dusuk = %d adet)", buyuk_normal, buyuk_yuksek, buyuk_dusuk);
	printf("\nKucuk (Normal = %d , Yuksek = %d , Dusuk = %d adet)", kucuk_normal, kucuk_yuksek, kucuk_dusuk);
	return 0;
}