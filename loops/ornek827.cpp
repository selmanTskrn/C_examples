#include <stdio.h>
#include <math.h>

int main ()
{
	int alis, satis;
	int kar=0, zarar=0;
	float oran;
	
	printf("APO Ithalat-Ihracat Sirketi Kar/Zarar Programi ");
	printf("\n----------------------------------------------");
	printf("\nAlis ve satis degerlerini giriniz : ");
	scanf("%d%d", &alis, &satis);
	
	while ( alis != 0 && satis != 0){
		
		oran = (float)(satis-alis)/alis ;
		
		if ( alis < satis){
			kar++;
			printf("(Kar orani %.2f)", oran);
		}
		else if ( alis > satis){
			zarar++;
			printf("(Zarar orani %.2f)", fabs(oran));
		}
	
		printf("\nAlis ve satis degerlerini giriniz : ");
		scanf("%d%d", &alis, &satis);
		
	}
	printf("Program sona erdi.");
	printf("\nToplamda %d islemden kar, %d islemden zarar edilmistir.", kar, zarar);
	return 0;
}