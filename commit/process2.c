#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	fork();
	printf("Called fork() system call \n");
	printf("Called fork() system call \n");
}
