#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void dikdortgenCiz ();

int main()
{
	dikdortgenCiz();
	printf("\n");
	printf("\n");
	dikdortgenCiz();
	
	return 0;
}
void dikdortgenCiz()
{
	int satir, sutun;
	srand(time(NULL));
	satir = rand()%5 + 1;
	sutun = rand()%10 + 1;
	for(int i=1; i<=satir ; i++){
		for(int j=1 ; j<=sutun ; j++){
			printf("*");
		}
		printf("\n");
	}
}