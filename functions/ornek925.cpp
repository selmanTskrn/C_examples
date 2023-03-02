#include <stdio.h>
#include <math.h>
void birbirineEnYakin(int x1,int y1,int x2,int y2,int x3,int y3);
int main()
{
	birbirineEnYakin(3,3 , 7,7 , 9,9);
}
void birbirineEnYakin(int x1,int y1,int x2,int y2,int x3,int y3)
{
	float enKucuk;
	float mesafe12 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	float mesafe13 = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	float mesafe23 = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	printf("Yakin olan = ");
	
	if(mesafe12<mesafe13 && mesafe12<mesafe23)
		
		printf("(%d,%d) - (%d,%d)", x1,y1,x2,y2);
		
	else if (mesafe13<mesafe12 && mesafe13<mesafe23)
	
		printf("(%d,%d) - (%d,%d)", x1,y1,x3,y3);
	
	else if (mesafe23<mesafe13 && mesafe23<mesafe12)
	
		printf("(%d,%d) - (%d,%d)", x2,y2,x3,y3);
	
}