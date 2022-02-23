#include <stdio.h>

int main()
{
	int num;
	int number,multiplier;
	
	printf("What is the number \n" );
	scanf("%d", &number);
	
	for (num = 1; num <= number ; num++)
	{
		for ( multiplier = 1; multiplier <= 12 ; multiplier++)
		{
			printf("%d",num);
			printf("%d",multiplier);
		}
	}
	
}
