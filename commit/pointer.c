#include <stdio.h>

int main()
{

	char NOC[] = { "Aigbogun","Murtala","Okorocha", "Adewale", "Osazuwa"};
	char min[] = { "Internal affairs","Justice","Defense", "Power & Steel", "Petroleum"};
	char GPZ[] = { "South West","North East","South South", "South West", "South East"};
	
	*ptr = &NOC[];
	
	for (int i = 1; i <= 5; i ++)
	{
		printf("%c",*ptr);
	}
