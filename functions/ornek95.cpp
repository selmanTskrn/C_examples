#include <stdio.h>

float cevirTL(float a, float b, float c, float d);

int main()
{
	float birTL, elliKr, yirmibesKr, onKr;
	
	printf("Bozukluklarinin agirliklarini sirasiyla kg cinsinden giriniz"
	"\n(Sirasiyla 1TL, 50 kurus, 25 kurus, 10 kurus) : ");
	scanf("%f%f%f%f", &birTL, &elliKr, &yirmibesKr, &onKr);
	printf("Bozukluklarinin toplami ederi = %.2f", cevirTL(birTL, elliKr, yirmibesKr, onKr));
	return 0;
}
float cevirTL(float a, float b, float c, float d)
{
	float toplam;
	toplam = a/0.0082 + (b/0.0068)/2 + (c/0.004)/4 + (d/0.00315)/10;
	return toplam;
}