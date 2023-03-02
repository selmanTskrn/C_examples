#include <stdio.h>
#include <math.h>

void ucgenCiz(){
	printf("    /\\    \n");
	printf("   /  \\   \n");
	printf("  /    \\  \n");
	printf(" --------  \n");
}
void dikdortgenCiz(){
	printf("===========\n");
	printf("|         |\n");
	printf("|         |\n");
	printf("|         |\n");
	printf("-----------\n");
}
void ikiSatirBosluk(){
	printf("\n\n");
}
int main()
{
	ucgenCiz();
	dikdortgenCiz();
	ikiSatirBosluk();
	ucgenCiz();
	dikdortgenCiz();
}