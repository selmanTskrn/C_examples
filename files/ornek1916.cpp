#include <stdio.h>
#include <string.h>
int main()
{
	char ad1[20], ad2[20];
	char soyad1[20], soyad2[20];
	
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;
	
	fp1 = fopen("valilik.txt","r");
	fp2 = fopen("koruma.txt","r");
	fp3 = fopen("ortak.txt","w");
	
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL){
		printf("Acilamayan dosyalar var.");
		return 1;
	}
	fscanf(fp1,"%s%s%*d", ad1, soyad1);
	while( !feof(fp1) ){
		rewind(fp2);
		fscanf(fp2,"%s%s%*d", ad2, soyad2);
		while( !feof(fp2) ){
			if ( !strcmp(ad1,ad2) && !strcmp(soyad1,soyad2)){
				fprintf(fp3,"%s %s\n",ad1, soyad1);
				break;
			}
			fscanf(fp2,"%s%s%*d",ad2,soyad2);
		}
		fscanf(fp1,"%s%s%*d",ad1, soyad1);
	}
	printf("ortak.txt basarili sekilde olusturuldu");
	fclose(fp1); fclose(fp2); fclose(fp3);
	return 0;
}