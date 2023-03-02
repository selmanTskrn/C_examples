#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void paraat(int a, char b);
int main ()
{
	printf("\nIlk cagriliyor.\n");
	paraat(100,'T');
	printf("\nIkinci cagriliyor.\n");
	paraat(100,'Y');
	return 0;
}
void paraat(int a, char b)
{
	int var, toplam=0;
	srand(time(0));
	for(int i=1; i<=a ; i++){
		var = rand()%2 + 1;
		switch (b){
			case 'T':
				if (var==1)
					toplam++;
				break;
			case 'Y':
				if (var==2)
					toplam++;
				break;
			default:
				printf("yanlis ifade girildi");
				break;
				
		}
	}
	printf("%d adet %c geldi", toplam, b);
	
}