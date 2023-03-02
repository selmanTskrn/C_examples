#include <stdio.h>
#include <ctype.h>
int main()
{
	char kisa_mesaj[20];
	char ch;
	int tus_basimi = 0;
	
	FILE *dosya1;
	FILE *dosya2;
	
	printf("Kisa mesaj iceren dosyanin adini giriniz: ");
	scanf("%s",kisa_mesaj);
	
	dosya1 = fopen(kisa_mesaj,"r");
	dosya2 = fopen("frekans.txt","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	ch = fgetc(dosya1);
	while( !feof(dosya1) ){
		ch = tolower(ch);
		if(ch==97||ch==100||ch==103||ch==106||ch==109||ch==112||ch==116||ch==119)
			tus_basimi += 1;
		else if(ch==98||ch==101||ch==104||ch==107||ch==110||ch==113||ch==117||ch==120)
			tus_basimi += 2;
		else if(ch==99||ch==102||ch==105||ch==108||ch==111||ch==114||ch==118||ch==121)
			tus_basimi += 3;
		else if(ch==115||ch==122)
			tus_basimi += 4;
		else if(ch==' ')
			tus_basimi += 1;
		ch = fgetc(dosya1);
	}
	fprintf(dosya2,"Toplam %d kez\ntusa basilmistir.",tus_basimi);
	fclose(dosya1); fclose(dosya2);
	return 0;
}