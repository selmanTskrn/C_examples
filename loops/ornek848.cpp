#include <stdio.h>

int main ()
{
	int nabiz, cocukNabiz=120, yetiskinTasikardi=0;
	char grup;
	printf("Nabiz degerlendirme programina hos geldiniz\n"
	"(Sonlandirmak icin kategoriye b:bitir veya nabiz degerini 0 giriniz)\n"
	"-----------------------------------------------------------------");
	printf("\nYas grubu (y:yetiskin, c:cocuk) ve nabiz degeri : ");
	scanf("%c%d", &grup, &nabiz);
	
	while ( grup != 'b' && nabiz != 0 ) {
		
		switch ( grup ){
			case 'c':
				if( nabiz>0 && nabiz<80 )
					printf("Nabiz dusuk (Bradikardi)");
				else if( nabiz>=80 && nabiz<=100)
					printf("Nabiz normal");
				else if ( nabiz>100)
					printf("Nabiz yuksek (Tasikardi)");
				else
					printf("Yanlis kategori veya nabiz degeri");
				
				if (cocukNabiz>nabiz && nabiz>0)
					cocukNabiz=nabiz;
				break;
			case 'y':
				if ( nabiz>0 && nabiz<60)
					printf("Nabiz dusuk (Bradikardi)");
				else if( nabiz>=60 && nabiz<=100)
					printf("Nabiz normal");
				else if ( nabiz>100){
					printf("Nabiz yuksek (Tasikardi)");
					yetiskinTasikardi++;
				}
				else
					printf("Yanlis kategori veya nabiz degeri");
				break;
			default:
				printf("Yanlis kategori veya nabiz degeri");
		}
		
		printf("\nYas grubu (y:yetiskin, c:cocuk) ve nabiz degeri : ");
		scanf("%s%d", &grup, &nabiz);
		
	}
	
	printf("Program sona erdi\n"
	"Cocuklarda en dusuk nabiz degeri : %d"
	"\nYetiskinlerde tasikardi sayisi   : %d", cocukNabiz, yetiskinTasikardi);
	
	return 0;
}