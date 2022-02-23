#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void folklore()
{
	int q = 15, s = 25, m= 25, t = 20, x, k;
	x = ((s <= m) && (t > q));
	k =((m==q)||(s>t));
	
	if (fork() == 0){
		printf("xprocess = %d\n",x);
	}
	
	else{
		printf("Kprocess = %d\n",++k);
		}
}

int main()
{
	folklore();
	}
