#include <stdio.h>
#include <string.h>
int main()
{
	char ay[12], hangi_ay[12];
	int gun;
	float upload_MB, download_MB;
	float toplam_upload = 0, toplam_download = 0, ucret = 0;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("adsl.txt","r");
	dosya2 = fopen("fatura.txt","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	printf("Hangi ayin faturasini istiyorsunuz : ");
	scanf("%s", hangi_ay);
	
	fscanf(dosya1,"%s%d%f%f", ay, &gun, &upload_MB, &download_MB);
	while( !feof(dosya1) ){
		if(strcmp(ay,hangi_ay) == 0){
			toplam_upload += upload_MB;
			toplam_download += download_MB;
		}
		fscanf(dosya1,"%s%d%f%f", ay, &gun, &upload_MB, &download_MB);
	}
	if(toplam_download > 6144){
		ucret = (toplam_download - 6144) * 0.011719;
	}
	
	fprintf(dosya2,"%s 2012\n"
	"Toplam\nyukleme(upload)		: %.2f GB\n"
	"Toplam\nindirme(download)	: %.2f GB\n"
	"Kota asim ucreti 	: %.2f TL", hangi_ay, toplam_upload/1024, toplam_download/1024, ucret);
	
	printf("%s 2012 faturaniz olusturulmustur", hangi_ay);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}