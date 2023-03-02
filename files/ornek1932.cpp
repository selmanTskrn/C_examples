#include <stdio.h>
#include <string.h>
int main()
{
	char besin[15];
	char yenilen[15];
	float miktar, toplam_kalori = 0, kalori;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1932kalori.txt","r");
	dosya2 = fopen("1932siparis.txt","r");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya2,"%s%f", yenilen, &miktar);
	while( !feof(dosya2) ){
		rewind(dosya1);
		fscanf(dosya1,"%s%f", besin, &kalori);
		while( !feof(dosya1) ){
			if(strcmp(besin,yenilen) == 0){
				toplam_kalori += miktar * kalori;
				break;
			}
			fscanf(dosya1,"%s%f", besin, &kalori);
		}
		fscanf(dosya2,"%s%f", yenilen, &miktar);
	}
	printf("Toplam Kalori : \n %.2f", toplam_kalori);
	fclose(dosya1); fclose(dosya2);
	return 0;
}