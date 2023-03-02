#include <stdio.h>

int main()
{
	int Tbugun, Kbugun, Tyarin, Kyarin, Kdeneme=1;
	int test=0;
	
	while ( test == 0){
	
		Kbugun=Kdeneme;
		Tbugun=10000;
	
		for(int i=1 ; i<101 ; i++){
			
			Tyarin = (1+0.01)*Tbugun - 0.00001*Tbugun*Kbugun;
			Kyarin = (1-0.005)*Kbugun + 0.00001*0.01*Tbugun*Kbugun;
		
			Tbugun=Tyarin;
			Kbugun=Kyarin;
		}
	if ( Tbugun<10000){
		test=1;
		printf("%d", Kdeneme);
		break ;
	}	
	else
		Kdeneme++;
	
	}
	return 0 ;
}