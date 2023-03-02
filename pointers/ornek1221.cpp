#include <stdio.h>

void toplamPara( int , int , int , int , int *, int *);

int main()
{
	int krs50;
	int krs25;
	int krs10;
	int krs5;
	int lira, kurus;
	
	printf("50 kurus miktari : ");
	scanf("%d", &krs50);
	printf("25 kurus miktari : ");
	scanf("%d", &krs25);
	printf("10 kurus miktari : ");
	scanf("%d", &krs10);
	printf("5 kurus miktari : ");
	scanf("%d", &krs5);
	
	toplamPara( krs50, krs25, krs10, krs5, &lira, &kurus);
	
	printf("---------------------------------\n"
	"Toplam parasal deger %d lira, %d kurustur.", lira, kurus);
	return 0;
}
void toplamPara( int krs50, int krs25, int krs10, int krs5, int *lirap, int *kurusp)
{
	int toplam;
	
	toplam = 50*krs50 + 25*krs25 + 10*krs10 + 5*krs5;
	
	*kurusp = toplam%100;
	*lirap = toplam/100;
}