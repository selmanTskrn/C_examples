#include <stdio.h>

int main()
{
	int n, i=0;
	int enAz;
	
	printf("Il sayisini giriniz : ");
	scanf("%d", &n);
	
	int  plaka[n], destek[n];
	do {
		printf("%d. evin plakasi ve destek miktari : ", i+1);
		scanf("%d %d", &plaka[i], &destek[i]);
		i++;
	} while ( i<n );
	enAz=0;
	for ( i=1 ; i<n ; i++){
		if ( destek[i]<destek[enAz] )
			enAz = i;
	}
	
	printf("\nEn az destek alan ile gore, illerin fazlalari");
	printf("\nIl	:");
	for (i=0 ; i<n ; i++)
		printf("%d	", plaka[i]);
	
	printf("\nFazla	:");
	for (i=0 ; i<n ; i++)
		printf("%d	", destek[i]-destek[enAz]);
	return 0;
}