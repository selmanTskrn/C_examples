#include <stdio.h>

int main()
{
	int notlar[100];
	int maxnot, maxadet=0, ogrenci_not, adet;
	int i=0, j;
	char ogrenci_no[10];
	FILE *dosya1;
	
	if ( (dosya1 = fopen("ornek199ogrenci.dat","r")) == NULL ){
		printf("Dosya acilamadi");
		return 1;
	}
	
	fscanf(dosya1,"%*s%d",&notlar[0]);
	while( !feof(dosya1) ){
		i++;
		fscanf(dosya1,"%*s%d",&notlar[i]);
	}
	
	for( i=0 ; i<99 ; i++){
		adet = 0;
		for( j=i+1 ; j<100 ; j++){
			if (notlar[i] == notlar[j]){
				adet++;
			}
		}
		if(maxadet < adet){
			maxadet = adet;
			maxnot = notlar[i];
		}
	}
	printf("Bu sinifta yigilmanin oldugu not %d dir (%d adet)\n",maxnot, maxadet);
	printf("Bu notu alan ogrencilerin\n"
	"NUMARASI  :   NOTU  :\n"
	"----------   --------\n");
	
	rewind(dosya1);
	fscanf(dosya1,"%s%d",ogrenci_no,ogrenci_not);
	while( !feof(dosya1) ){
		if (ogrenci_not == maxnot){
			printf("%s	%d",ogrenci_no, ogrenci_not);
		}
		fscanf(dosya1,"%s%d",ogrenci_no,ogrenci_not);
	}
	fclose(dosya1);
	return 0;
}