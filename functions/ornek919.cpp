#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void islemYaz (char a, int b);
int main()
{
	islemYaz ('+', 3);
	
	islemYaz ('-', 2);
	return 0;
}
void islemYaz (char a, int b)
{
	int buyuk, kucuk, yedek;
	srand(time(NULL));
	if (b==3){
		buyuk = rand()%900 + 100;
		kucuk = rand()%900 + 100;
		
	}
	if (b==2){
		buyuk = rand()%90 + 10;
		kucuk = rand()%90 + 10;
	}
	if(buyuk<kucuk){
		yedek=buyuk;
		buyuk=kucuk;
		kucuk=yedek;
	}
	printf("Sorunuz:\n");
	printf("   %d   \n", buyuk);
	printf("   %d   \n", kucuk);
	printf("%c_______\n", a);
	printf("    ? \n\n");
}