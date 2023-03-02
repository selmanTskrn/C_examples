#include <stdio.h>

int sadelestir( int *, int *);

int main()
{
	int pay;
	int payda;
	int c;
	
	printf("Pay ve payda degerlerini giriniz : ");
	scanf("%d%d", &pay, &payda);
	
	printf("-------------------------\n"
	"Onceki degeri	: %d / %d", pay, payda);
	
	c = sadelestir( &pay, &payda);
	
	printf("\nSadelestirilmis	: %d / %d", pay, payda);
	
	return 0;
}
int sadelestir( int *payp, int *paydap)
{
	int i = *payp;
	int test = 0;
	
	while ( 1<i )
	{
		if ( *payp%i==0 && *paydap%i==0){
			*payp /= i;
			*paydap /= i;
			test = 1;
		}
		i--;
	}
	return test;
}