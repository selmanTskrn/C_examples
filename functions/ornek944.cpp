#include <stdio.h>
float ihtimal(int );
int main()
{
	printf("%.2f\n", ihtimal(20));
	printf("%.2f\n", ihtimal(37));
	
}
float ihtimal(int a)
{
	float  carpim=1;
	
	for (int i=1; i<=a ; i++){
		carpim = carpim*(366-i+1)/366;
	}
	return 1 - carpim;
}