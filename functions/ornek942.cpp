#include <stdio.h>
void buyukTarih(int gun1,int ay1, int yil1,int gun2,int ay2,int yil2);
int main()
{
	buyukTarih(12,12,2004,22,12,2004);
	printf("\n--------------------\n");
	buyukTarih(20,01,2005,22,12,2004);
	
}
void buyukTarih(int gun1,int ay1, int yil1,int gun2,int ay2,int yil2)
{
	int gun, ay, yil;
	yil = yil1;
	ay = ay1;
	gun = gun1;
	
	if ( yil2>yil1){
		yil = yil2;
		ay = ay2;
		gun = gun2;
	}
	else if (yil1==yil2){
		if(ay1<ay2){
			ay = ay2;
			gun = gun2;
		}
		else if (ay1==ay2){
			if(gun1<gun2)
				gun = gun2;
			
		}
	}
	printf("%d/%d/%d", gun, ay, yil);
	
}