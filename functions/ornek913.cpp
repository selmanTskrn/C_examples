#include <stdio.h>
float gronsCevir(float a, char b);
int main()
{
	printf("%.7f\n", gronsCevir(3,'o'));
	return 0;
}
float gronsCevir(float a, char b)
{
	if (b=='o')
		return a*28.3495231;
	
	else if(b=='g')
		return a/28.3495231;
	
}