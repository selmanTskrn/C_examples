#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ertelemeMesajiYaz(int a);
int main()
{
	ertelemeMesajiYaz(1);
	
	ertelemeMesajiYaz(4);
	
	ertelemeMesajiYaz(7);
	
	ertelemeMesajiYaz(2);
	
	return 0;
}
void ertelemeMesajiYaz(int a)
{
	srand(time(NULL));
	
	if( a==1 || a==2 || a==12)
		
		a = rand()%9 + 3;

	else if ( 3<=a && a<=5)
		
		a = ( rand()%9 + 6)%12;
	
	else if (6<=a && a<=8)
	
		a = (rand()%9 + 9)%12;
	
	else if (9<=a && a<=11)
	
		a = (rand()%9 + 12)%12;
	

	if(a>=9)
	
		printf("sonbaharda tatile gidecegiz\n");

	else if (a>=6)
	
		printf("Yazin tatile gidecegiz\n");

	else if (a>=3)
		
		printf("ilkbaharda tatile gidecegiz\n");

	else 
		printf("Kisin tatile gidecegiz\n");
	
}