#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void zarat (int var1, char a);

int main()
{
	printf("\nIlk cagriliyor. \n");
	zarat(100, 'B');
	printf("\nIkinci cagriliyor. \n");
	zarat(500, 'A');
	return 0;
}
void zarat (int var1, char a)
{
	int zar, toplam=0;
	
	srand(time(0));
	for (int i=1 ; i<=var1 ; i++){
		zar = rand()%6 + 1;
		switch (a){
			case 'B':
				if (zar==1)
					toplam++;
				break;
			case 'K':
				if (zar==2)
					toplam++;
				break;
			case 'U':
				if (zar==3)
					toplam++;
				break;
			case 'D':
				if (zar==4)
					toplam++;
				break;
			case 'E':
				if (zar==5)
					toplam++;
				break;
			case 'A':
				if (zar==6)
					toplam++;
		}
		
	}
	printf("%c gelme sayisi : %d", a, toplam);
	
	
}