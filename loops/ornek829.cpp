#include <stdio.h>

int main ()
{
	int yas;
	int enGenc;
	int adet=0;
	
	printf("Yasi giriniz (Durdurmak icin 0) : ");
	scanf("%d", &yas);
	
	while ( yas>99 || yas<0 ){
			
		printf("Hata !! Lutfen yas degerine dikkat ediniz"
			"\nYasi giriniz (Durdurmak icin 0) : ");
		scanf("%d", &yas);
	}
	
	enGenc=yas;	
	
	while ( yas!=0 ) {
		
		while ( yas>99 || yas<0 ){
			printf("Hata !! Lutfen yas degerine dikkat ediniz"
			"\nYasi giriniz (Durdurmak icin 0) : ");
			scanf("%d", &yas);
		}
		if (enGenc>yas){
			enGenc=yas;
			adet=1;
		}
		else if (enGenc==yas)
			adet++;
		
		printf("Yasi giriniz (Durdurmak icin 0) : ");
		scanf("%d", &yas);		
	}
	
	printf("En genc katilimci yasi %d", enGenc);
	printf("\n ( Bu yasta toplam %d kisi giris yapti )", adet);
	return 0;
}