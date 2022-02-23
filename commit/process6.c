#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>

void *childThread(void* args)
{
	printf("The child process created this thread \n");
	return NULL;
}

int main()
{
	int gap;
	pthread_t pid;
	
	printf("How many kini do u want to see \n");
	scanf("%d",&gap);
	fork()* gap;
	pthread_create(&pid, NULL, &childThread, NULL);
	pthread_join(pid,NULL);
}
