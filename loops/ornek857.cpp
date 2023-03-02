#include <stdio.h>

int main()
{
	int sayi1, sayi2, sayi3 ; 
	float 	rakam11, rakam12, rakam21, rakam22;

	for (sayi1=10 ; sayi1<=99 ; sayi1++){
		
		rakam11 = (sayi1-sayi1%10)/10 ;
		rakam12 = sayi1%10 ;
	
		for (sayi2=10 ; sayi2<=99 ; sayi2++){
			
			rakam21 = (sayi2-sayi2%10)/10;
			rakam22 = sayi2%10;
			
			if ( rakam12==rakam21 && rakam11/rakam22 == (float)sayi1/sayi2)
				if ( sayi1 != sayi2)
					printf("%d/%d  ", sayi1, sayi2);
		}
	}
	
	return 0;
}