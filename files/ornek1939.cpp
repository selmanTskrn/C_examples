#include <stdio.h>
#include <math.h>
#include <time.h>
struct kayit{
	char ad[20];
	char soyad[20];
	int dogum_tarihi;
	int olum_tarihi;
};
typedef struct kayit Kayit;

int main()
{
	Kayit kayit1;
	int kazananlar[4];
	int sayi, test;
	int i, k;
	
	FILE *dosya1;
	FILE *dosya2;
	
	/*dosya1 = fopen("kayitlar.txt","w");
	dosya2 = fopen("kazanan.txt","r");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}*/
	srand(time(NULL));
	i = 0;
	while( i != 4){
		sayi = rand()%10000 + 1;
		test = 0;
		for (k=0 ; k<i ; k++){
			if (sayi == kazananlar[k]){
				test++;
			}
		}
		if()
		if (!test){
			kazananlar[i] = sayi;
			printf("%d\n",kazananlar[i]);
			i++;
		}
	}
	//fclose(dosya1); fclose(dosya2);
	return 0;
}