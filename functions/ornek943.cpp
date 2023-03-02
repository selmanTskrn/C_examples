#include <stdio.h>
int sagdanenbuyuk(int var);
int main()
{
	printf("\n%d", sagdanenbuyuk(46531));
	printf("\n%d", sagdanenbuyuk(666));
}
int sagdanenbuyuk(int var)
{
	int enBuyuk=0, a=0, b, id=10;
	
	while (var!=0){
		b = var%10;
		if(a<b){
			enBuyuk++;	
			a=b;
		}
		
		var /= 10;
	}
	return enBuyuk;
}