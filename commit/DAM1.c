
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float ptr[6];
	
	//ptr[1] = (int*)malloc(9 * sizeof(int));
	
	printf("A \n");
	printf("| 667  422  |\n");
	printf("| 233.5 515 |\n");
	printf("| 183.4  335|\n");
	
	printf("B \n");
	printf("| 100  151.6|\n");
	printf("| 245.5 312 |\n");
	printf("| 333  578.8|\n");
	
	float Numbers[6] = {667,422,233.5,515,183.4,335};
	float Numbers2[6] = {100,151.6,245.5,312,333,578.8};
	
	for (int i = 0; i <= 5; ++i)
	{
		ptr[i] = Numbers[i] + Numbers2[i];
		printf("%f\n", ptr[i]);
	}
	
	
	}
	
	
