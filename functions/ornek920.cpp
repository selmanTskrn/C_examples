#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void islemYaz(char a, int b);

int main()
{
	islemYaz('/', 3);
	
	islemYaz('*', 2);
	return 0;
}
void islemYaz(char a, int b)
{
	int buyuk,kucuk;
	srand(time(NULL));
	switch(b){
		case 2:
			kucuk = rand()%20 +10;
			if (a=='/')
				buyuk = kucuk*(rand()%5 + 1);
				
			else if (a=='*')
				buyuk = rand()%90 + 10;
			break ;
			
		case 3:
			kucuk = rand()%200 + 100;
			if (a=='/')
				buyuk =kucuk * (rand()%5 + 1);
			else if (a=='*')
				buyuk = rand()%900 + 100;
			break ;
		
		default:
			printf("yanlis deger girdiniz!!!");	
	}
		
	if(a=='/'){
		printf("Sorunuz : \n");
		printf("   %d | %d \n"
			   "       -----\n"
			   " _____|  ?  \n", buyuk, kucuk);
	}
	if(a=='*'){
		printf("\nSorunuz : ");
		printf("\n    %d "
			   "\n    %d "
			   "\n*_______"
			   "\n    ? ", buyuk, kucuk);
	}
}