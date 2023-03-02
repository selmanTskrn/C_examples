#include <stdio.h>
#include <math.h>
int alanBul (int var1, int var2, int var3, int var4);

int main()
{
	int c;
	// sol ust (-2,3), sağ alt (2,-2)
	c = alanBul (-2, 3, 2, -2);
	printf("%d\n", c);
}
int alanBul (int var1, int var2, int var3, int var4)
{
	return fabs(var1-var3)*fabs(var2-var4);
}