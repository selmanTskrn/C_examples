#include <stdio.h>

struct personel{
	char sicil_no[10];
	char saat[10];
	char gircik;
};
typedef struct personel Personel;

int main()
{
	Personel personel1;
	Personel enGec, enErken;
	int enBuyuk = 0, enKucuk, dakika;
	char ptr;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("1930gunluk.dat","r");
	dosya2 = fopen("1930gec.dat","w");
	dosya3 = fopen("1930erken.dat","w");
	
	if( dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%s %c", personel1.sicil_no, personel1.saat, &personel1.gircik);
	while( !feof(dosya1) )
	{
		ptr = strtok( personel1.saat, ":");
		dakika = 60 * atoi(ptr);
		ptr = strtok( NULL, ":");
		dakika += atoi(ptr);
		
		switch (gircik){
			case '<':
				if(dakika
				
		}
	}
}