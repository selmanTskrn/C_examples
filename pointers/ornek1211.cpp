#include <stdio.h>

void ziynetSayisiniBul( float *, float, int *, int *, int *);

int main()
{
	float toplam_para;
	float tam_altin;
	int tam;
	int yarim;
	int ceyrek;
	
	printf("Para miktarinizi giriniz (TL) : ");
	scanf("%f", &toplam_para);
	
	printf("Tam altin satis degerini giriniz : ");
	scanf("%f", &tam_altin);
	
	ziynetSayisiniBul( &toplam_para, tam_altin, &tam, &yarim, &ceyrek);
	
	printf("----------------------------\n"
	"Elinizdeki para ile\n"
	"%d adet tam, %d adet yarim, %d adet ceyrek altin alabilirsiniz.\n"
	"Kalan paraniz : %.2f", tam, yarim, ceyrek, toplam_para);
	
	return 0;
}
void ziynetSayisiniBul( float *parap, float deger, int *tamp, int *yarimp, int *ceyrekp)
{
	*tamp = *parap / deger;
	*parap -= *tamp * deger;
	deger /= 2;
	
	*yarimp = *parap / deger;
	*parap -= *yarimp * deger;
	deger /= 2;
	
	*ceyrekp = *parap / deger;
	*parap -= *ceyrekp * deger;
}