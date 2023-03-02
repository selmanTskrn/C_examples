#include <stdio.h>
float enbuyuk (float , float , float );
float enkucuk (float , float , float );
int main()
{
	printf("\n%.1f", enbuyuk(10.4, 10.9, 10.3));
	printf("\n%.1f", enkucuk(10.1, 10.9, 10.3));
}
float enbuyuk (float a1, float a2, float a3)
{
	float buyuk=a1;
	
	if ( a2 > buyuk )
		buyuk = a2;
	if ( a3 > buyuk )
		buyuk = a3;
	return buyuk;
}
float enkucuk (float b1, float b2, float b3)
{
	float kucuk=b1;
	
	if ( b2 < kucuk )
		kucuk = b2;
	if ( b3 < kucuk )
		kucuk = b3;
	return kucuk;
}