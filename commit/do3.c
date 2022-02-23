#include <stdio.h>
#include <stdlib.h>

int main()
{

	char exp;
	printf("Are you experienced? y or n? ");
	scanf("%c", &exp);
	
	int age;
	printf("How old are you? ");
	scanf("%d", &age);
	
	
	
		if (exp == 'y' && age >= 40 ) 
	{
		printf("your salary is N560,000");
	}
	
	else if ( exp = 'y' && age >= 30 && age <= 40 )
	{
		 printf("your salary is N560,000");
		}
	
	else if ( exp == 'y' && age <= 28 )
	{
		 printf("your salary is N300,000");
		}	
	
	else
	{
		printf("your salary is N300,000");
	}
	
	return 0;
}
	
	

