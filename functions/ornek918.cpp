#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void tarihUret(int a, char b);
int main()
{
	int adet;
	char mevsim;
	
	printf("adet ve mevsim giriniz : ");
	scanf("%d %c", &adet, &mevsim);
	tarihUret(adet, mevsim);
}
void tarihUret(int a, char b)
{
	int gun, ay, yil;
	srand(time(NULL));
	for (int i=1 ; i<=a ; i++){
		gun = rand()%30 + 1;
		yil = rand()%50 + 2023;
		if (b=='i'){
			ay = rand()%3 + 3;
		}
		else if ( b=='s'){
			ay = rand()%3 + 9;
		}
		printf("%d/%d/%d\n", gun, ay, yil);
		
	}
	
		
}