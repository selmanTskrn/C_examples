#include <stdio.h>

int main()
{
	char ad[20], soyad[20];
	int daire, i;
	int test;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("bayram.txt","r");
	dosya2 = fopen("yoklar.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fprintf(dosya2,"Gelmeyenler:\n");
	for(i=1 ; i<=60 ; i++)
	{
		test = 1;
		fscanf(dosya1,"%d%s%s", &daire, ad, soyad);
		while( !feof(dosya1) && test ){
			if(daire == i){
				test++;
			}
			fscanf(dosya1,"%d%s%s", &daire, ad, soyad);
		}
		if( test ){
			fprintf(dosya2,"%d\n", i);
		}
	}
	fclose(dosya1); fclose(dosya2);
	return 0;
}