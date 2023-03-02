#include <stdio.h>
#include <string.h>
int main()
{
	char kimlik_no1[15], kimlik_no2[15];
	int test, i=1;
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya11;
	
	dosya1 = fopen("1926giris.txt","r");
	dosya11 = fopen("1926giris.txt","r");
	dosya2 = fopen("1926casus.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL || dosya11 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s",kimlik_no1);
	while( !feof(dosya1) ){
		test = 0;
		fseek(dosya11,(i+1)*sizeof(kimlik_no1),0);
		fscanf(dosya11,"%s",kimlik_no2);
		while( !feof(dosya11) ){
			if( strcmp(kimlik_no1 , kimlik_no2 ) == 0){
				test++;
			}
			fscanf(dosya11,"%s",kimlik_no2);
		}
		if(test==1){
			fprintf(dosya2,"%s\n",kimlik_no1);
		}
		fscanf(dosya1,"%s",kimlik_no1);
		i++;
	}
	fclose(dosya1); fclose(dosya11); fclose(dosya2);
	return 0;
}