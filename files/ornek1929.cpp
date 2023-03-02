#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 12

int main()
{
	char no[12], no1[12];
	char ch;
	char *ptr;
	int sayi, k;
	int rakamlar[6], i;
	int c1, c2, c3;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1929girisler.txt","r");
	dosya2 = fopen("1929gecersiz.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	fscanf(dosya1,"%s",no);
	while( !feof(dosya1) ){
		for (i=0 ; i<6 ; i++){
			ch = no[i];
			rakamlar[i] = atoi(&ch);
		}
		c1 = rakamlar[0] + rakamlar[1];
		c2 = fabs(rakamlar[2] - rakamlar[3]);
		c3 = rakamlar[4] * rakamlar[5];
		
		ch = no[7];
		k = atoi(&ch);
		
		if ((c1 + c2 + c3) % 10 != k){
			fprintf(dosya2,"%s\n",no);
		}
		
		fscanf(dosya1,"%s",no);
	}
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}