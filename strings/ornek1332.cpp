#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strstrip( char [], int );

int main()
{
	char sample1[] = "This is a 1. test";
	char sample2[] = "This is a 2. test";
	char sample3[] = "This is a 3. test";
	
	strstrip( sample1, 1);
	printf("%s\n", sample1);
	strstrip( sample2, 2);
	printf("%s\n", sample2);
	strstrip( sample3, 3);
	printf("%s\n", sample3);
	
	return 0;
}
void strstrip( char sample[], int n)
{
	char sesliHarf[5] = {'a','e','i','o','u'};
	char *aptr;
	int i, j, k, len;
	int test;
	
	len = strlen(sample);
	
	switch (n){
		case 1:
			for ( i=0 ; i<len ; i++)
			{	
				for ( j=0 ; j<5 ; j++)
				{
					if ( sample[i] == sesliHarf[j])
						
					{
						for (k=i ; k<len ; k++)
						{
							sample[k] = sample[k+1];
						}
						len--;
						i--;
					}
				}
			}
			break;
		case 2:
			for ( i=0 ; i<len ; i++)
			{	
				test = 1;
				for ( j=0 ; j<5 ; j++)
				{
					if ((sample[i] == sesliHarf[j]) )
					{
						test = 0;
					}
					
				}
				if(test==1 && isalpha(sample[i]))
				{
					for (k=i ; k<len ; k++)
					{
							sample[k] = sample[k+1];
					}
					len--;
					i--;
				}
			}
			break;
		case 3:
			for( i=0 ; i<len ; i++)
			{
				if(isdigit(sample[i]))
				{
					for( j=i ; j<len ; j++)
					{
						sample[j] = sample[j+1];
					}
					i--;
					len--;
				}
			}
			break;
	}
	
}