#include <stdio.h>

int main()
{
	int Tbugun=10000, Kbugun=1229, Tyarin, Kyarin;
	
	for(int i=1 ; i<101 ; i++){
		
		Tyarin = (1+0.01)*Tbugun - 0.00001*Tbugun*Kbugun;
		Kyarin = (1-0.005)*Kbugun + 0.00001*0.01*Tbugun*Kbugun;
		Tbugun=Tyarin;
		Kbugun=Kyarin;
		printf("%d gun sonra %d tavsan %d kurt kalmistir\n", i, Tyarin, Kyarin);
		
	}
	return 0 ;
}