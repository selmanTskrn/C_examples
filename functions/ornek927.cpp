#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void renkMesajiYaz(int a);
int main()
{
	renkMesajiYaz(0);
	
	renkMesajiYaz(2);
	return 0;
}
void renkMesajiYaz(int a)
{
	srand(time(NULL));
	
	a = (rand()%9 + (a+1))%10;
	
	printf("\nHic begenmedim !\n");
	
	if(a==0)
		printf("siyah");
	else if(a==1)
		printf("kahverengi");
	else if (a==2)
		printf("kirmizi");
	else if (a==3)
		printf("turuncu");
	else if (a==4)
		printf("sari");
	else if (a==5)
		printf("yesil");
	else if (a==6)
		printf("mavi");
	else if (a==7)
		printf("mor");
	else if (a==8)
		printf("gri");
	else if (a==9)
		printf("beyaz");
	printf(" renge boyayin\n");

}
