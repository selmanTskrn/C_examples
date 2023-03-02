#include <stdio.h>
#include <string.h>
typedef struct sube{
	char isim[20];
	int kontenjan;
	int ogrenciSayisi;
}Sube;
void subeUret( Sube *, Sube *);
int main()
{
	Sube a1;
	Sube a2 = {"", 0, 0};
	
	printf("Subenin isim, kontenjan ve ogrenci sayisini giriniz :\n");
	scanf("%s%d%d", &a1.isim, &a1.kontenjan, &a1.ogrenciSayisi);
	
	if (a1.ogrenciSayisi > a1.kontenjan){
		subeUret( &a1, &a2);
	}
	
	printf("------------------------\n"
	"Bolundukten sonraki hali : %s %d %d\n"
	"Yeni sube bilgileri : %s %d %d"
	, a1.isim, a1.kontenjan, a1.ogrenciSayisi, a2.isim, a2.kontenjan, a2.ogrenciSayisi);
	
	return 0;
}
void subeUret( Sube *ptr1, Sube *ptr2)
{
	strcpy(ptr2->isim, "EK");
	ptr2->kontenjan = ptr1->kontenjan;
	ptr2->ogrenciSayisi = ptr1->ogrenciSayisi - ptr1->kontenjan;
	ptr1->ogrenciSayisi = ptr1->kontenjan;
	
}