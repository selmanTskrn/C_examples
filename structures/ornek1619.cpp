#include <stdio.h>
#include <string.h>
typedef struct uzunluk{
	char cins[6];
	float sayi;
} Uzunluk;
void metreYap( Uzunluk *);
int main()
{
	Uzunluk a;
	
	printf("Uzunluk miktar ve cinsini giriniz : ");
	scanf("%f%s", &a.sayi, &a.cins);
	printf("%s\n", a.cins);
	metreYap( &a );
	printf("Metreye donustukten sonra : ");
	printf("  %.2f %s ", a.sayi, a.cins);
	return 0;
}
void metreYap( Uzunluk *ptr)
{
	float k;
	
	if ( strcmp((ptr->cins),"mm") == 0){
		ptr->sayi = (ptr->sayi) / 1000;
	}
	else if ( strcmp((ptr->cins),"cm") == 0){
		ptr->sayi = (ptr->sayi) / 100;
	}
	else if ( strcmp((ptr->cins),"km") == 0){
		ptr->sayi = 1000 * (ptr->sayi);
	}

	strcpy(ptr->cins, "mt");
}