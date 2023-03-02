#include <stdio.h>

char matris[3][3] = {'1','2','3','4','5','6','7','8','9'};

void yazdir()
{
	int i,j;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("\n\n");
		for(j=0 ; j<3 ; j++)
			printf("\t%c",matris[i][j]);
		printf("\n\n");
	}
}
void Xyerlestir()
{
	int x;
	char *ptr = *matris;
	
	
	while(1){
		printf("X koymak istediginiz yeri giriniz : ");
		scanf("%d", &x);
		if( *(ptr+x-1) == 'O' || *(ptr+x-1) == 'X'){
			printf("X koymak istediginiz yer dolu.\n");
		}
		else if( x < 1 || x > 9)
			printf("Gecerli bir sayi giriniz");
		else{
			*(ptr+x-1) = 'X';
			break;
		}
			
	}
}
void Oyerlestir( )
{
	int x;
	char *ptr = *matris;
	
	while(1){
		printf("O koymak istediginiz yeri giriniz : ");
		scanf("%d", &x);
		if( *(ptr+x-1) == 'O' || *(ptr+x-1) == 'X'){
			printf("X koymak istediginiz yer dolu.\n");
		}
		else if( x < 1 || x > 9)
			printf("Gecerli bir sayi giriniz");
		else{
			*(ptr+x-1) = 'O';
			break;
		}
			
	}
}
int kontrol()
{
	char *ptr = *matris;
	/* X kontrol */
	/* Satir kontrol */
	if( *(ptr) == 'X' && *(ptr+1) == 'X' && *(ptr+2) == 'X')
		return 3;
	if( *(ptr+3) == 'X' && *(ptr+4) == 'X' && *(ptr+5) == 'X')
		return 3;
	if( *(ptr+6) == 'X' && *(ptr+7) == 'X' && *(ptr+8) == 'X')
		return 3;
	/* Sutun kontrol */
	if( *(ptr) == 'X' && *(ptr+3) == 'X' && *(ptr+6) == 'X')
		return 3;
	if( *(ptr+1) == 'X' && *(ptr+4) == 'X' && *(ptr+7) == 'X')
		return 3;
	if( *(ptr+2) == 'X' && *(ptr+5) == 'X' && *(ptr+8) == 'X')
		return 3;
	/* Capraz kontrol */
	if( *(ptr) == 'X' && *(ptr+4) == 'X' && *(ptr+8) == 'X')
		return 3;
	if( *(ptr+2) == 'X' && *(ptr+4) == 'X' && *(ptr+6) == 'X')
		return 3;
	
	/* Y kontrol */
	/* Satir kontrol */
	if( *(ptr) == 'O' && *(ptr+1) == 'O' && *(ptr+2) == 'O')
		return 2;
	if( *(ptr+3) == 'O' && *(ptr+4) == 'O' && *(ptr+5) == 'O')
		return 2;
	if( *(ptr+6) == 'O' && *(ptr+7) == 'O' && *(ptr+8) == 'O')
		return 2;
	/* Sutun kontrol */
	if( *(ptr) == 'O' && *(ptr+3) == 'O' && *(ptr+6) == 'O')
		return 2;
	if( *(ptr+1) == 'O' && *(ptr+4) == 'O' && *(ptr+7) == 'O')
		return 2;
	if( *(ptr+2) == 'O' && *(ptr+5) == 'O' && *(ptr+8) == 'O')
		return 2;
	/* Capraz kontrol */
	if( *(ptr) == 'O' && *(ptr+4) == 'O' && *(ptr+8) == 'O')
		return 2;
	if( *(ptr+2) == 'O' && *(ptr+4) == 'O' && *(ptr+6) == 'O')
		return 2;
		
	else
		return 1;
}
int main()
{
	int adet = 1, secim;
	int galip = 1;
	
	yazdir();
	Xyerlestir();
	while(adet != 5)
	{
		yazdir();
		Oyerlestir();
		galip = kontrol();
		if(galip == 2)
			break;
		yazdir();
		Xyerlestir();
		galip = kontrol();
		if(galip == 3)
			break;
		adet++;
	}
	
	printf("\n\n--------OYUN BITTI--------\n");
	yazdir();
	
	switch (galip){
		case 2:
			printf("KAZANAN O");
			break;
		case 3:
			printf("KAZANAN X");
			break;
		case 1:
			printf("Berabere");
			break;
	}
	
	return 0;
}