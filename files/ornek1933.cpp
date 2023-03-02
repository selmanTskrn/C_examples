#include <stdio.h>
#include <stdlib.h>
int main()
{
	char tcno[15];
	char ch;
	int toplam10, toplam_tek, toplam_cift;
	int num, i, test;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1933basvuru.txt","r");
	dosya2 = fopen("1933gecerli.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	fscanf(dosya1,"%s",tcno);
	while( !feof(dosya1) ){
		test = 0;
		toplam10 = 0;
		toplam_tek = 0;
		toplam_cift = 0;
		for(i=0 ; i<10 ; i++){
			ch = tcno[i];
			num = ch-'0';
			toplam10 += num;
		}
		ch = tcno[10];
		num = ch-'0';
		if( toplam10%10 != num ){
			test++;
		}
		for(i=0 ; i<9 ; i++){
			ch = tcno[i];
			num = ch-'0';
			if (i%2 == 0){		
				toplam_tek += num;
			}
			else {
				toplam_cift += num;
			}
		}
		ch = tcno[9];
		num = ch-'0';
		if( (toplam_tek * 7 + toplam_cift * 9) % 10 != num){
			test++;
		}
		
		if(test == 0)
			fprintf(dosya2,"%s\n",tcno);
		fscanf(dosya1,"%s",tcno);
	}
	fclose(dosya1); fclose(dosya2);
	return 0;
}