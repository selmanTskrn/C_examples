#include <stdio.h>
#include <string.h>
struct oyuncu{
	char ad[20];
	int can;
	float kuvvet;
};
struct oyuncu hangisiDahaKuvvetli( struct oyuncu, struct oyuncu);
void yazdir(struct oyuncu);
void kuvvetiArttir(struct oyuncu *, float miktar);
int main()
{
	struct oyuncu a = { "Otto", 3, 0.7};
	struct oyuncu b = {	"Botto", 4, 4.6 };
	struct oyuncu c;
	
	kuvvetiArttir( &a, 1.0);
	
	c = hangisiDahaKuvvetli( a , b );
	
	yazdir( c );
	
	return 0;
}
struct oyuncu hangisiDahaKuvvetli( struct oyuncu a, struct oyuncu b)
{
	if (a.kuvvet > b.kuvvet){
		return a;
	}
	else if ( a.kuvvet < b.kuvvet)
		return b;
	else {
		if (a.can > b.can )
			return a;
		else 
			return b;
	}
}
void yazdir( struct oyuncu a)
{
	printf("Adi	: %s\n", a.ad);
	printf("Can	: %d\n", a.can);
	printf("Kuvveti	: %.2f", a.kuvvet);
}
void kuvvetiArttir( struct oyuncu *ptr, float miktar)
{
	ptr->kuvvet += miktar;
}