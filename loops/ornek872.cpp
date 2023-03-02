#include <stdio.h>

int main()
{
	int i;
	float carpim=1, olasilik;
	
	for (i=1 ; 1 ; i++){
		carpim=1;
		for ( int l=1 ; l<=i ; l++){
			carpim= carpim * (367-l)/366;
		}
		olasilik = 1-carpim;
		if (olasilik >= 0.9000)
			break;
	}
	printf("olasiligin %f olmasi icin en az %d kisi olmalidir.", olasilik, i);
	return 0;
}