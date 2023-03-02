// B kumesi A kumesinin alt kumesi mi 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int altKumesiMi( int[], int, int[], int );
int main()
{
	int A[10], B[5];
	int c;
	
	srand(time(0));
	printf("A dizisinin elemanlari : ");
	for (int i=0 ; i<10 ; i++){
		A[i] = rand()%100 + 1;
		printf("%d, ", A[i]);
	}
	printf("\nB dizisinin elemanlarini giriniz : ");	
	for (int i=0 ; i<5 ; i++)
		scanf("%d", &B[i]);
	c = altKumesiMi( A, 10, B, 5);
	if ( c==1 )
		printf("B dizisi, A dizisinin alt kumesidir.");
	else
		printf("B dizisi, A dizisinin alt kumesi degildir.");
}
int altKumesiMi( int a[], int n1, int b[], int n2)
{
	int test=1, c=1;
	for (int i=0 ; i<n1  ; i++)
	{
		test = 0;
		for (int j=0 ; j<n2 ; j++)
		{
			if ( a[i]==b[j] )
				test = 1;
		}
		
	}
	
	return test;
}