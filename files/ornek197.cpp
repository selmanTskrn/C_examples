#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char no[10], no1[10];
	int vize, final, vize1, final1;
	float ortalama, ortalama1;
	float sinifOrt;
	float fark;
	FILE *dptr;
	
	if(( dptr = fopen("ornek197.dat","r")) == NULL ){
		printf("Dosya acilamadi");
		return 1;
	}
	
	printf("Ogrencilerin sinif ortalamasi : ");
	scanf("%f", &sinifOrt);
	printf("Ortalamaya en yakin ogrencinin\n");
	printf("No		Vize	Final	Ortalamasi\n");
	printf("----------	------	------	---------\n");
	
	fscanf(dptr,"%s%d%d", no, &vize, &final);
	ortalama = (float)(4*vize + 6*final) / 10;
	ortalama1 = ortalama;
	strcpy(no1, no);
	vize1 = vize;
	final1 = final;
	fark = fabs(sinifOrt - ortalama);
	
	while ( !feof(dptr) ){
		fscanf(dptr,"%s%d%d", no, &vize, &final);
		ortalama = (float)(4*vize + 6*final) / 10;
		if (fabs(sinifOrt - ortalama) < fark){
			vize1 = vize;
			final1 = final;
			fark = fabs(ortalama - sinifOrt);
			strcpy(no1, no);
			ortalama1 = ortalama;
		}
		
	}
	printf("%s	%d	%d	%.2f", no1, vize1, final1, ortalama1);
	fclose(dptr);
	return 0;
}