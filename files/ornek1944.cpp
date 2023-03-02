#include <stdio.h>
#include <string.h>

struct bolum{
	char bolum_adi[20];
	int adet;
};
typedef struct bolum Bolum;

int main()
{
	int i, test;
	Bolum bolumler[5] = {"",0};
	char bolumAdi[20];
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("tanitim.txt","r");
	dosya2 = fopen("bilgi.txt","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s",bolumAdi);
	while( !feof(dosya1) ){
		if (strlen(bolumAdi) == 3){
			test = 0;
			for(i=0 ; i<5 ; i++){
				if (strcmp(bolumAdi , bolumler[i].bolum_adi) == 0){
					bolumler[i].adet++;
					test++;
			}	
			}
			if (!test){
				for (i=0 ; i<5 ; i++){
					if(bolumler[i].adet == 0){
					
					}
				}
			}
		}
		fscanf(dosya1,"%s",bolumAdi);
	}
	for (i=0 ; i<5 ; i)
	fprintf(dosya1,"En fazla bilgi alinan bolum : %s"
	"%d kisiye tanitilmistir.", );
}