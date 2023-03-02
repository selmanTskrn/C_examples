#include <stdio.h>
float cdenfye(int a);
float fdencye(int b);

int main()
{
	printf("%.2f \n", cdenfye(10));
	printf("%.2f \n", fdencye(10));
}
float cdenfye(int a)
{
	return 180*a/100 + 32;
}
float fdencye(int b)
{
	return (b-32)/1.8 ;
}