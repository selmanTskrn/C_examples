#include <stdio.h>

void makeShortSMS( char[], char[]);

int main()
{
	char cumle[160];
	char sms[160];
	
	printf("Cumle giriniz : ");
	fgets(cumle, 160, stdin);
	
	makeShortSMS( cumle, sms);
	printf("----------------------\n"
	"Kisaltilmis hali : %s", sms);
	
	return 0;
}
void makeShortSMS( char cumle[], char sms[])
{
	char sesli[6] = "aeiou"; 
	int i, j, k=0, test;
	
	for ( i=0 ; cumle[i] != '\0' ; i++)
	{
		test = 0;
		for ( j=0 ; j<6 && test == 0; j++)
		{
			if ( cumle[i] == sesli[j])
				test = 1;
			if ( i==0 || cumle[i-1] == ' ')
				test = 0;
		}
		if (test==0)
		{
			sms[k] = cumle[i];
			k++;
		}
	}
}