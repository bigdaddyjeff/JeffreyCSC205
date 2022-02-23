#include <stdio.h>
#include <string.h>

int main()
{

	 char Things[3][5][1] = {
	{ {'Aigbogun'},{'Murtala'},{'Okorocha'}, {'Adewale'},{ 'Osazuwa'}}
	{ {'Internal affairs'},{'Justice'},{'Defense'}, {'Power & Steel'},{ 'Petroleum'}}
	{{' South West'},{'North East'},{'South South'}, {'South West'}, {'South East'}}
	};
	
	for (int i = 0; i < 3; i ++)
	{
		for (int j = 0; j < 5; j ++)
		{
			for (int k = 0; k < 1; k ++)
			{
				printf("the elements of it are = %s ",Things[i][j][k]);
			}
		}

	}
	
}
